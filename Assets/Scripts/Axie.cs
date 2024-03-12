using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Spine.Unity;
using UnityEngine;
using DG.Tweening;
using Spine;

public class Axie : BaseAxie
{
    [SerializeField] Transform trans;
    [SerializeField] Transform axieParent;
    [SerializeField] HealthBar health;

    const string ATTACK_CAST_LOW = "attack/ranged/cast-low";
    const string MOVING_FORWARD  = "action/move-forward";
    const string IDLE_NORMAL     = "action/idle/normal";
    const string AXIE_WIN        = "activity/victory-pose-back-flip";

    public override async void Init(AxieData _data)
    {
        base.Init(_data);
        Data                        =  _data;
        HP                          =  Data.hp;
        Position                    =  Data.position;
        IsCanMove                   =  Data.canMode;
        Type                        =  Data.type;
        trans.localPosition         =  new Vector2(_data.position.X, _data.position.Y);
        SkeletonAnimation           =  await AxieLoader.LoadAxie(_data.axieId, axieParent);
        SkeletonAnimation.state.End += SpineEndHandler;

        SetDirection(Data.direction);
        health.SetHealth(HP, Data.type);
    }

    void SpineEndHandler(TrackEntry trackEntry)
    {
        string animation = trackEntry.Animation.Name;
        if (animation.Equals(ATTACK_CAST_LOW))
        {
        }
    }

    public void Move(AxiePosition pos)
    {
        SetDirection(pos.X > Position.X ? LookDirection.LOOK_RIGHT : LookDirection.LOOK_LEFT);
        Position = pos;
        IsMoving = true;

        trans.DOLocalMove(new Vector2(Position.X, Position.Y), GameConfig.AXIE_TIME_MOVING).SetDelay(GameConfig.AXIE_TIME_MOVING).OnComplete(MoveComplete);
        SkeletonAnimation.state.SetAnimation(0, MOVING_FORWARD, false);
        SkeletonAnimation.AnimationState.AddAnimation(0, IDLE_NORMAL, true, 0);
    }

    void MoveComplete()
    {
        IsMoving = false;
    }

    public void Attack(Axie target)
    {
        SetDirection(target.Position.X > Position.X ? LookDirection.LOOK_RIGHT : LookDirection.LOOK_LEFT);
        SkeletonAnimation.state.SetAnimation(0, ATTACK_CAST_LOW, false);
        SkeletonAnimation.AnimationState.AddAnimation(0, IDLE_NORMAL, true, 0);
    }

    public void UpdateEnemy(Axie axie)
    {
        Enemys.Add(axie);
    }

    public void ClearEnemy()
    {
        Enemys.Clear();
    }

    public void Win()
    {
        SkeletonAnimation.state.SetAnimation(0, AXIE_WIN, true);
    }

    public void SetDirection(LookDirection direction)
    {
        switch (direction)
        {
            case LookDirection.LOOK_LEFT:
                SkeletonAnimation.skeleton.ScaleX = 1 * Mathf.Abs(SkeletonAnimation.skeleton.ScaleX);
                break;
            case LookDirection.LOOK_RIGHT:
                SkeletonAnimation.skeleton.ScaleX = -1 * Mathf.Abs(SkeletonAnimation.skeleton.ScaleX);
                break;
        }
    }

    public void DecreaseHealth(int damage, Action<Axie> onDie)
    {
        HP -= damage;
        health.DecreaseHealth(damage);

        if (HP <= 0)
        {
            if (onDie != null) onDie(this);
            Die();
        }
    }

    async void Die()
    {
        trans.DOScale(Vector3.zero, GameConfig.AXIE_TIME_MOVING);
    }
    
    void OnDestroy()
    {
        SkeletonAnimation.state.End -= SpineEndHandler;
    }
}