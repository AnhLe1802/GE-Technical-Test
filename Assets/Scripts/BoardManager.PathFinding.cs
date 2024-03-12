using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public partial class BoardManager
{
    void Move()
    {
        for (int i = 0; i < listAttacker.Count; i++)
        {
            BaseCell cell = listAttacker[i];
            Axie     axie = listAxieAttacker.Find(x => x.Position.X.Equals(cell.Position.X) && x.Position.Y.Equals(cell.Position.Y));

            if (axie == null) continue;
            if (cell.GoalPosition == null) continue;
            if (OnMoving != null) OnMoving(axie, cell.GoalPosition);
        }
    }

    void Attack(TypeCell type)
    {
        if (type == TypeCell.Attacker)
        {
            for (int i = 0; i < listAxieAttacker.Count; i++)
            {
                Axie axie = listAxieAttacker[i];
                if (axie.Enemys.Count <= 0) continue;
                if (OnAttacking != null) OnAttacking(axie, axie.Enemys);
            }
        }
        else if (type == TypeCell.Defender)
        {
            for (int i = 0; i < listAxieDefender.Count; i++)
            {
                Axie axie = listAxieDefender[i];
                if (axie.Enemys.Count <= 0) continue;
                if (OnAttacking != null) OnAttacking(axie, axie.Enemys);
            }
        }
    }

    void UpdateBoard()
    {
        listAttacker.Clear();
        listDefender.Clear();

        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                board[i, j].SetNone();
            }
        }

        for (int i = 0; i < listAxieAttacker.Count; i++)
        {
            Axie axie = listAxieAttacker[i];
            board[axie.Position.X, axie.Position.Y].SetAttacker();
            board[axie.Position.X, axie.Position.Y].GoalPosition = null;
            board[axie.Position.X, axie.Position.Y].IsWillMove   = false;
            listAttacker.Add(board[axie.Position.X, axie.Position.Y]);
        }

        for (int i = 0; i < listAxieDefender.Count; i++)
        {
            Axie axie = listAxieDefender[i];
            board[axie.Position.X, axie.Position.Y].SetDefender();
            board[axie.Position.X, axie.Position.Y].GoalPosition = null;
            board[axie.Position.X, axie.Position.Y].IsWillMove   = false;
            listDefender.Add(board[axie.Position.X, axie.Position.Y]);
        }
    }

    void FindNearestGoal()
    {
        List<Tuple<int, int>> listVisited = FindListVisited();
        List<Tuple<int, int>> checkGoal   = new List<Tuple<int, int>>();   

        for (int i = 0; i < listAttacker.Count; i++)
        {
            BaseCell cell = listAttacker[i];
            Axie     axie = listAxieAttacker.Find(x => x.Position.X.Equals(cell.Position.X) && x.Position.Y.Equals(cell.Position.Y));
            if (listVisited.Count <= 0) continue;
            if (axie.Enemys.Count > 0) continue;

            BaseCell goalCell = FindGoal(new Tuple<int, int>(cell.Position.X, cell.Position.Y), listVisited);
            if (goalCell == null) continue;

            Tuple<int, int> start = new Tuple<int, int>(cell.Position.X,     cell.Position.Y);
            Tuple<int, int> goal  = new Tuple<int, int>(goalCell.Position.X, goalCell.Position.Y);

            List<Tuple<int, int>> path = FindShortestPath(board, start, goal);

            if (path.Count <= 0) continue;
            if (checkGoal.Contains(path[0])) continue;
            if (board[path[0].Item1, path[0].Item2].TypeCell1 == TypeCell.Attacker && board[path[0].Item1, path[0].Item2].IsWillMove == false) continue;
            
            checkGoal.Add(path[0]);
            cell.GoalPosition = new AxiePosition() { X = path[0].Item1, Y = path[0].Item2 };
            cell.IsWillMove   = true;
        }
    }

    void CheckNearestEnemyAttacker()
    {
        for (int i = 0; i < listAxieAttacker.Count; i++)
        {
            List<Tuple<int, int>> listEnemy = new List<Tuple<int, int>>();
            Axie                  axie      = listAxieAttacker[i];
            Tuple<int, int>       tuple     = new Tuple<int, int>(axie.Position.X, axie.Position.Y);
            listEnemy.AddRange(GetEnemy(tuple, TypeCell.Defender));
            axie.ClearEnemy();

            for (int j = 0; j < listEnemy.Count; j++)
            {
                Tuple<int, int> tp = listEnemy[j];
                Axie            ax = listAxieDefender.Find(x => x.Position.X.Equals(tp.Item1) && x.Position.Y.Equals(tp.Item2));
                if (ax == null) continue;

                axie.UpdateEnemy(ax);
            }
        }
    }

    void CheckNearestEnemyDefender()
    {
        for (int i = 0; i < listAxieDefender.Count; i++)
        {
            List<Tuple<int, int>> listEnemy = new List<Tuple<int, int>>();
            Axie                  axie      = listAxieDefender[i];
            Tuple<int, int>       tuple     = new Tuple<int, int>(axie.Position.X, axie.Position.Y);
            listEnemy.AddRange(GetEnemy(tuple, TypeCell.Attacker));
            axie.ClearEnemy();

            for (int j = 0; j < listEnemy.Count; j++)
            {
                Tuple<int, int> tp = listEnemy[j];
                Axie            ax = listAxieAttacker.Find(x => x.Position.X.Equals(tp.Item1) && x.Position.Y.Equals(tp.Item2));
                if (ax == null) continue;

                axie.UpdateEnemy(ax);
            }
        }
    }


    List<Tuple<int, int>> FindListVisited()
    {
        List<Tuple<int, int>> listVisited = new List<Tuple<int, int>>();
        for (int i = 0; i < listDefender.Count; i++)
        {
            BaseCell        cell  = listDefender[i];
            Tuple<int, int> tuple = new Tuple<int, int>(cell.Position.X, cell.Position.Y);
            listVisited.AddRange(GetNeighbors(tuple));
        }
        return listVisited;
    }


    BaseCell FindGoal(Tuple<int, int> start, List<Tuple<int, int>> listVisited)
    {
        Vector2         startVec = new Vector2(start.Item1, start.Item2);
        Vector2         goalVec  = Vector2.zero;
        Tuple<int, int> goal     = null;
        float           distance = float.MaxValue;

        for (int i = 0; i < listVisited.Count; i++)
        {

            goalVec.x = listVisited[i].Item1;
            goalVec.y = listVisited[i].Item2;
            if (board[listVisited[i].Item1, listVisited[i].Item2].TypeCell1 == TypeCell.Attacker && board[listVisited[i].Item1, listVisited[i].Item2].IsWillMove == false) continue;
            float distance2Vec = Vector3.Distance(startVec, goalVec);
            if (distance2Vec <= distance)
            {
                distance = distance2Vec;
                goal     = listVisited[i];
            }
        }

        if (goal == null) return null;
        return board[goal.Item1, goal.Item2];
    }

    List<Tuple<int, int>> FindShortestPath(BaseCell[,] grid, Tuple<int, int> start, Tuple<int, int> goal)
    {
        PriorityQueue<Tuple<int, int>>               priorityQueue = new PriorityQueue<Tuple<int, int>>();
        HashSet<Tuple<int, int>>                     visited       = new HashSet<Tuple<int, int>>();
        Dictionary<Tuple<int, int>, Tuple<int, int>> cameFrom      = new Dictionary<Tuple<int, int>, Tuple<int, int>>();

        priorityQueue.Enqueue(start, Heuristic(start, goal));

        while (priorityQueue.Count > 0)
        {
            Tuple<int, int> current = priorityQueue.Dequeue();

            if (current.Equals(goal))
            {
                return ReconstructPath(cameFrom, start, goal);
            }

            visited.Add(current);

            foreach (var neighbor in GetNeighbors(current))
            {
                if (!visited.Contains(neighbor))
                {
                    priorityQueue.Enqueue(neighbor, Heuristic(neighbor, goal));
                    cameFrom[neighbor] = current;
                }
            }
        }

        return new List<Tuple<int, int>>();
    }

    List<Tuple<int, int>> ReconstructPath(Dictionary<Tuple<int, int>, Tuple<int, int>> cameFrom, Tuple<int, int> start, Tuple<int, int> goal)
    {
        List<Tuple<int, int>> path    = new List<Tuple<int, int>>();
        Tuple<int, int>       current = goal;

        while (current != null)
        {
            path.Add(current);
            if (cameFrom.TryGetValue(current, out var previous))
            {
                current = previous;
            }
            else
            {
                current = null;
            }
        }

        path.Reverse();
        path.RemoveAt(0);
        return path;
    }

    int Heuristic(Tuple<int, int> a, Tuple<int, int> b)
    {
        return Math.Abs(a.Item1 - b.Item1) + Math.Abs(a.Item2 - b.Item2);
    }

    List<Tuple<int, int>> GetNeighbors(Tuple<int, int> point)
    {
        List<Tuple<int, int>> neighbors = new List<Tuple<int, int>>();

        if (point.Item1 - 1 >= 0 && board[point.Item1 - 1, point.Item2].TypeCell1 != TypeCell.Defender)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1 - 1, point.Item2));
        }

        if (point.Item1 + 1 < width && board[point.Item1 + 1, point.Item2].TypeCell1 != TypeCell.Defender)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1 + 1, point.Item2));
        }

        if (point.Item2 - 1 >= 0 && board[point.Item1, point.Item2 - 1].TypeCell1 != TypeCell.Defender)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1, point.Item2 - 1));
        }

        if (point.Item2 + 1 < height && board[point.Item1, point.Item2 + 1].TypeCell1 != TypeCell.Defender)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1, point.Item2 + 1));
        }

        return neighbors;
    }

    List<Tuple<int, int>> GetEnemy(Tuple<int, int> point, TypeCell type)
    {
        List<Tuple<int, int>> neighbors = new List<Tuple<int, int>>();

        if (point.Item1 - 1 >= 0 && board[point.Item1 - 1, point.Item2].TypeCell1 == type)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1 - 1, point.Item2));
        }

        if (point.Item1 + 1 < width && board[point.Item1 + 1, point.Item2].TypeCell1 == type)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1 + 1, point.Item2));
        }

        if (point.Item2 - 1 >= 0 && board[point.Item1, point.Item2 - 1].TypeCell1 == type)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1, point.Item2 - 1));
        }

        if (point.Item2 + 1 < height && board[point.Item1, point.Item2 + 1].TypeCell1 == type)
        {
            neighbors.Add(new Tuple<int, int>(point.Item1, point.Item2 + 1));
        }

        return neighbors;
    }
}


class PriorityQueue<T>
{
    List<Tuple<T, int>> elements = new List<Tuple<T, int>>();
    public int          Count => elements.Count;

    public void Enqueue(T item, int priority)
    {
        elements.Add(Tuple.Create(item, priority));
    }

    public T Dequeue()
    {
        int bestIndex = 0;

        for (int i = 1; i < elements.Count; i++)
        {
            if (elements[i].Item2 < elements[bestIndex].Item2)
            {
                bestIndex = i;
            }
        }

        T bestItem = elements[bestIndex].Item1;
        elements.RemoveAt(bestIndex);
        return bestItem;
    }
}