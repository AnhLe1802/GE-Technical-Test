using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GamePlayUI : MonoBehaviour
{
    [SerializeField] SliderUI        speedSlider;
    [SerializeField] Button          pauseBtn;
    [SerializeField] Button          playBtn;
    [SerializeField] Button          restartBtn;
    [SerializeField] TextMeshProUGUI pauseTxt;
    [SerializeField] TextMeshProUGUI resultTxt;
    [SerializeField] GameObject      playUI;
    [SerializeField] GameObject      resultUI;
    [SerializeField] PowerBar        powerBar;

    public Action<bool> OnPause   = delegate(bool b) { };
    public Action       OnPlay    = delegate { };
    public Action       OnRestart = delegate { };
    bool                isPause   = false;

    void Start()
    {
        speedSlider.onValueChanged.AddListener(OnSliderValueChanged);
        pauseBtn.onClick.AddListener(OnPauseClick);
        playBtn.onClick.AddListener(OnPlayClick);
        restartBtn.onClick.AddListener(OnRestartClick);
    }

    void OnDestroy()
    {
        speedSlider.onValueChanged.RemoveListener(OnSliderValueChanged);
        pauseBtn.onClick.RemoveListener(OnPauseClick);
        playBtn.onClick.RemoveListener(OnPlayClick);
        restartBtn.onClick.RemoveListener(OnRestartClick);
    }

    public void Init(AxieLevelData data)
    {
        int attackerTotalHP = data.listAttacker.Count * data.listAttacker[0].hp;
        int defenderTotalHP = data.listDefender.Count * data.listDefender[0].hp;

        powerBar.Init(attackerTotalHP, defenderTotalHP);
    }

    void OnPauseClick()
    {
        isPause       = !isPause;
        pauseTxt.text = isPause ? "Resume" : "Pause";
        if (OnPause != null) OnPause(isPause);
    }

    void OnPlayClick()
    {
        if (OnPlay != null) OnPlay();
        playUI.SetActive(false);
    }

    void OnRestartClick()
    {
        if (OnRestart != null) OnRestart();
    }

    void OnSliderValueChanged(float value)
    {
        float newTimeScale;

        if (value <= 0.5f)
        {
            newTimeScale = Mathf.Lerp(0.0f, 1.0f, value * 2.0f);
        }
        else
        {
            newTimeScale = Mathf.Lerp(1.0f, 10.0f, (value - 0.5f) * 2.0f);
        }

        Time.timeScale = newTimeScale;
    }

    public void UpdatePowerBar(int atkCurrentHP, int defCurrentHP)
    {
        powerBar.UpdatePowerBar(atkCurrentHP, defCurrentHP);
    }

    public void UpdateResult(WinState state)
    {
        resultUI.SetActive(true);
        
        switch (state)
        {
            case WinState.Draw:
                resultTxt.text = "Draw !!!";
                break;
            case WinState.Attacker:
                resultTxt.text = "Attacker win !!!";
                break;
            case WinState.Defender:
                resultTxt.text = "Defender win !!!";
                break;
        }
    }
}