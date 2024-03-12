using System;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PowerBar : MonoBehaviour
{
    [SerializeField] Slider          powerSlider;
    [SerializeField] TextMeshProUGUI attackerInfoTxt;
    [SerializeField] TextMeshProUGUI defenderInfoTxt;

    int attackerTotalHP = 0;
    int defenderTotalHP = 0;

    public void Init(int atkTotalHP, int defTotalHP)
    {
        attackerTotalHP = atkTotalHP;
        defenderTotalHP = defTotalHP;

        float percentAtk = (float)attackerTotalHP / attackerTotalHP;
        float percentDef = (float)defenderTotalHP / defenderTotalHP;

        attackerInfoTxt.text = $"({percentAtk * 100}%) {attackerTotalHP}/{attackerTotalHP}";
        defenderInfoTxt.text = $"{defenderTotalHP}/{defenderTotalHP} ({percentDef * 100}%)";
    }

    public void UpdatePowerBar(int atkCurrentHP, int defCurrentHP)
    {
        float percentAtk = (float)atkCurrentHP / attackerTotalHP;
        float percentDef = (float)defCurrentHP / defenderTotalHP;

        float fill = (percentAtk == 0) ? 0 : ((percentDef == 0) ? 1 : (percentAtk - percentDef) / 2 + 0.5f);
        powerSlider.DOValue(fill, GameConfig.AXIE_TIME_ATTACKING);
        attackerInfoTxt.text = $"({Math.Round(percentAtk * 100, 2)}%) {atkCurrentHP}/{attackerTotalHP}";
        defenderInfoTxt.text = $"{defCurrentHP}/{defenderTotalHP} ({Math.Round(percentDef * 100, 2)}%)";
    }
}