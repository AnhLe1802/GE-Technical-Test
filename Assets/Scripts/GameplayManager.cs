using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using AxieMixer.Unity;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameplayManager : MonoBehaviour
{
    [SerializeField] LevelConfig   LevelConfig;
    [SerializeField] BoardManager  boardManager;
    [SerializeField] GamePlayUI    gamePlayUI;
    
    bool  isPlaying         = false;
    bool  isAttacking       = false;
    float timer             = 0f;
    float timeBetweenAction = GameConfig.ACTION_TIME;
    

    void Start()
    {
        Time.timeScale = 1;
        Init();
    }

    void RegisterEvent()
    {
        boardManager.OnAttacking += OnAttacking;
        boardManager.OnMoving    += OnMoving;
        gamePlayUI.OnPause       += OnPause;
        gamePlayUI.OnPlay        += OnPlay;
        gamePlayUI.OnRestart     += OnRestart;
    }

    void UnRegisterEvent()
    {
        boardManager.OnAttacking -= OnAttacking;
        boardManager.OnMoving    -= OnMoving;
        gamePlayUI.OnPause       -= OnPause;
        gamePlayUI.OnPlay        -= OnPlay;
        gamePlayUI.OnRestart     -= OnRestart;
    }

    void Update()
    {
        if (!isPlaying) return;
        if (isAttacking) return;

        timer += Time.deltaTime;
        if (timer >= timeBetweenAction)
        {
            ActionPerSecond();
            timer = 0f;
        }
    }

    void OnPause(bool isPause)
    {
        isPlaying = !isPause;
    }

    void OnPlay()
    {
        isPlaying = true;
    }

    async void OnRestart()
    {
        await SceneManager.LoadSceneAsync("MainGame");
    }

    void Init()
    {
        RegisterEvent();
        boardManager.Init(LevelConfig.GetData());
        gamePlayUI.Init(LevelConfig.GetData());
    }

    void ActionPerSecond()
    {
        boardManager.Run();
     
        gamePlayUI.UpdatePowerBar(boardManager.GetCurrentAttackerHP(), boardManager.GetCurrentDefendeHPr());

        WinState result = boardManager.CheckWin();
        if (result != WinState.None)
        {
            EndGame(result);
        }
    }

    async void OnAttacking(Axie atk, List<Axie> targets)
    {
        for (int i = 0; i < targets.Count; i++)
        {
            Axie target = targets[i];
            Attack(atk, target, targets.Count);
        }
    }

    async void Attack(Axie atk, Axie target, int targetNumber)
    {
        atk.Attack(target);
        int damage = CalculatorDamage(targetNumber);
        await Task.Delay(TimeSpan.FromSeconds(GameConfig.AXIE_TIME_ATTACKING));
        target.DecreaseHealth(damage, OnDie);
    }

    void OnDie(Axie axie)
    {
        boardManager.HandleAxieDie(axie);
    }

    void OnMoving(Axie axie, AxiePosition position)
    {
        axie.Move(position);
    }

    void OnDestroy()
    {
        UnRegisterEvent();
    }

    int CalculatorDamage(int targetNumber)
    {
        int attackerNumber = UnityEngine.Random.Range(0, 2);
        int num            = 3 + attackerNumber - targetNumber;

        switch (num % 3)
        {
            case 0:  return 4;
            case 1:  return 5;
            case 2:  return 3;
            default: return 0;
        }
    }

    void EndGame(WinState result)
    {
        isPlaying = false;

        if (result == WinState.Attacker)
        {
            for (int i = 0; i < boardManager.GetListAxieAttacker().Count; i++)
            {
                Axie axie = boardManager.GetListAxieAttacker()[i];
                axie.Win();
            }
        }
        else if (result == WinState.Defender)
        {
            for (int i = 0; i < boardManager.GetListAxieDefender().Count; i++)
            {
                Axie axie = boardManager.GetListAxieDefender()[i];
                axie.Win();
            }
        }
        
        gamePlayUI.UpdateResult(result);
    }
}