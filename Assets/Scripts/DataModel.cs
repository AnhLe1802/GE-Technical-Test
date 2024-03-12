using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TypeCell
{
    None,
    Attacker,
    Defender
}

public enum WinState
{
    None,
    Draw,
    Attacker,
    Defender
}

public enum LookDirection
{
    LOOK_LEFT,
    LOOK_RIGHT
}

[System.Serializable]
public class AxiePosition
{
    [SerializeField] protected int x;
    [SerializeField] protected int y;

    public int X { get => x; set => x = value; }
    public int Y { get => y; set => y = value; }
}

[System.Serializable]
public class AxieData
{
    public string        id;
    public string        axieId;
    public int           hp;
    public bool          canMode;
    public LookDirection direction;
    public TypeCell      type;
    public AxiePosition  position;
}


[System.Serializable]
public class AxieLevelData
{
    public int width;
    public int height;
    public List<AxieData> listAttacker = new List<AxieData>();
    public List<AxieData> listDefender = new List<AxieData>();
}