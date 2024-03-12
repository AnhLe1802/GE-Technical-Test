using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public partial class BoardManager : MonoBehaviour
{
    [SerializeField] BaseCell  cellDarkPrefab;
    [SerializeField] BaseCell  cellLightPrefab;
    [SerializeField] Axie      axiePrefab;
    [SerializeField] Transform axieParent;

    int width;
    int height;

    protected                  BaseCell[,]    board            = null;
    [SerializeField] protected List<BaseCell> listAttacker     = null;
    [SerializeField] protected List<BaseCell> listDefender     = null;
    [SerializeField] protected List<Axie>     listAxieAttacker = null;
    [SerializeField] protected List<Axie>     listAxieDefender = null;

    public Action<Axie, List<Axie>>   OnAttacking = delegate(Axie axie, List<Axie>   target) { };
    public Action<Axie, AxiePosition> OnMoving    = delegate(Axie axie, AxiePosition position) { };


    public void Init(AxieLevelData data)
    {
        width        = data.width;
        height       = data.height;
        board        = new BaseCell[width, height];
        listAttacker = new List<BaseCell>();
        listDefender = new List<BaseCell>();

        InitGround(width, height);
        InitAxie(data);
    }


    public void InitGround(int width, int height)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    BaseCell cell = Instantiate(cellLightPrefab, Vector3.zero, Quaternion.identity, transform);
                    cell.Init(TypeCell.None, new AxiePosition() { X = i, Y = j });
                    board[i, j] = cell;
                }
                else
                {
                    BaseCell cell = Instantiate(cellDarkPrefab, Vector3.zero, Quaternion.identity, transform);
                    cell.Init(TypeCell.None, new AxiePosition() { X = i, Y = j });
                    board[i, j] = cell;
                }
            }
        }
    }

    public void HandleAxieDie(Axie axie)
    {
        if (axie.Type == TypeCell.Attacker)
        {
            listAxieAttacker.Remove(axie);
        }
        else if (axie.Type == TypeCell.Defender)
        {
            listAxieDefender.Remove(axie);
        }
        UpdateBoard();
    }

    public void Run()
    {
        CheckNearestEnemyAttacker();
        CheckNearestEnemyDefender();

        FindNearestGoal();

        Move();
        Attack(TypeCell.Attacker);
        Attack(TypeCell.Defender);
        UpdateBoard();
    }

    public void InitAxie(AxieLevelData data)
    {
        for (int i = 0; i < data.listAttacker.Count; i++)
        {
            AxieData axieData = data.listAttacker[i];
            Axie     axie     = Instantiate(axiePrefab, Vector3.zero, Quaternion.identity, axieParent);
            axie.Init(axieData);
            board[axieData.position.X, axieData.position.Y].SetAttacker();
            listAttacker.Add(board[axieData.position.X, axieData.position.Y]);
            listAxieAttacker.Add(axie);
        }

        for (int i = 0; i < data.listDefender.Count; i++)
        {
            AxieData axieData = data.listDefender[i];
            Axie     axie     = Instantiate(axiePrefab, Vector3.zero, Quaternion.identity, axieParent);
            axie.Init(axieData);
            board[axieData.position.X, axieData.position.Y].SetDefender();
            listDefender.Add(board[axieData.position.X, axieData.position.Y]);
            listAxieDefender.Add(axie);
        }
    }

    public int GetCurrentAttackerHP()
    {
        int sum = 0;
        for (int i = 0; i < listAxieAttacker.Count; i++)
        {
            sum += listAxieAttacker[i].HP;
        }
        return sum;
    }

    public int GetCurrentDefendeHPr()
    {
        int sum = 0;
        for (int i = 0; i < listAxieDefender.Count; i++)
        {
            sum += listAxieDefender[i].HP;
        }
        return sum;
    }

    public List<Axie> GetListAxieDefender()
    {
        return listAxieDefender;
    }

    public List<Axie> GetListAxieAttacker()
    {
        return listAxieAttacker;
    }
    
    public WinState CheckWin()
    {
        if (listAxieAttacker.Count == 0 && listAxieDefender.Count == 0)
        {
            return WinState.Draw;
        }
        else if (listAxieAttacker.Count == 0) 
        {
            return WinState.Defender;
        }
        else if (listAxieDefender.Count == 0)
        {
            return WinState.Attacker;
        }

        return WinState.None;
    }
}