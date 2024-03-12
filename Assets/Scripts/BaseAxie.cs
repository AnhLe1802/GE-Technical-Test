using System;
using System.Collections;
using System.Collections.Generic;
using Spine.Unity;
using UnityEngine;
using UnityEngine.PlayerLoop;

public class BaseAxie : MonoBehaviour
{
    int               hp                = 0;
    bool              isCanMove         = false;
    bool              isMoving          = false;
    AxiePosition      position          = null;
    AxieData          data              = null;
    SkeletonAnimation skeletonAnimation = null;
    List<Axie>        enemys            = new List<Axie>();
    LookDirection     lookDirection     = LookDirection.LOOK_LEFT;
    TypeCell          type              = TypeCell.None;

    public int               HP                { get => hp;                protected set => hp = value; }
    public bool              IsCanMove         { get => isCanMove;         protected set => isCanMove = value; }
    public bool              IsMoving          { get => isMoving;          protected set => isMoving = value; }
    public AxiePosition      Position          { get => position;          protected set => position = value; }
    public AxieData          Data              { get => data;              protected set => data = value; }
    public SkeletonAnimation SkeletonAnimation { get => skeletonAnimation; protected set => skeletonAnimation = value; }
    public List<Axie>        Enemys            { get => enemys;            protected set => enemys = value; }
    public LookDirection     LookDirection     { get => lookDirection;     protected set => lookDirection = value; }
    public TypeCell          Type              { get => type;              protected set => type = value; }

    public virtual async void Init(AxieData _data) { }
}