using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseCell : MonoBehaviour
{
    AxiePosition position;
    AxiePosition goalPosition;
    TypeCell     typeCell;
    bool         isWillMove;

    public TypeCell     TypeCell1    { get => typeCell;     set => typeCell = value; }
    public AxiePosition Position     { get => position;     set => position = value; }
    public AxiePosition GoalPosition { get => goalPosition; set => goalPosition = value; }
    public bool         IsWillMove   { get => isWillMove;   set => isWillMove = value; }

    public void Init(TypeCell type, AxiePosition pos)
    {
        position           = pos;
        typeCell           = type;
        transform.position = new Vector2(pos.X, pos.Y);
    }

    public void SetAttacker()
    {
        typeCell = TypeCell.Attacker;
    }

    public void SetDefender()
    {
        typeCell = TypeCell.Defender;
    }

    public void SetNone()
    {
        typeCell = TypeCell.None;
    }
}