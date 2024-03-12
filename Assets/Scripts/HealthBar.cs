using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class HealthBar : MonoBehaviour
{
    [SerializeField] TextMeshPro    healthTxt;
    [SerializeField] SpriteRenderer healthFill;
    [SerializeField] SpriteRenderer healthFillDelay;

    Color32 attackerColor = new Color32(0,   241, 210, 255);
    Color32 defenderColor = new Color32(222, 205, 0,   255);
    Tween   delayHealthTween;


    int         fullHP          = 0;
    int         currentHP       = 0;
    const float TIME_DELAY_FILL = 0.5f;

    public void SetHealth(int hp, TypeCell type)
    {
        healthTxt.sortingOrder = 20;
        healthTxt.text         = hp.ToString();
        fullHP                 = hp;
        currentHP              = hp;
        healthFill.color       = type == TypeCell.Attacker ? attackerColor : defenderColor;

        gameObject.SetActive(true);
    }

    public void DecreaseHealth(int damage)
    {
        if (this == null) return;
        
        currentHP -= damage;
        if (currentHP <= 0) currentHP = 0;

        healthTxt.text = currentHP.ToString();
        float currentFill = healthFillDelay.transform.localScale.x;
        float fill        = (float)currentHP / fullHP;

        SetHealthFill(fill);

        if (delayHealthTween != null && delayHealthTween.active && delayHealthTween.IsPlaying())
        {
            delayHealthTween.Kill();
        }

        delayHealthTween = DOVirtual.Float(0f, 1f, TIME_DELAY_FILL, value =>
        {
            if (this == null)
            {
                delayHealthTween.Kill();
                return;
            }

            var filledValue = Mathf.Lerp(currentFill, fill, value);
            SetHealthFillDelay(filledValue);
        });
    }

    void SetHealthFill(float valueFill)
    {
        healthFill.transform.SetLocalScaleX(valueFill);
    }

    void SetHealthFillDelay(float valueFill)
    {
        healthFillDelay.transform.SetLocalScaleX(valueFill);
    }
}