using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using AxieMixer.Unity;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class GameFlowManager : MonoBehaviour
{
    void Awake()
    {
        InitGameFlow();
    }

    async void InitGameFlow()
    {
        await InitMixer();
        await LoadMainGame();
    }

    async Task InitMixer()
    {
        Mixer.Init();
        await AxieLoader.LoadAxie("4191804", gameObject.transform, true);
        await AxieLoader.LoadAxie("2724598", gameObject.transform, true);
    }

    async Task LoadMainGame()
    {
        await SceneManager.LoadSceneAsync("MainGame");
    }
}