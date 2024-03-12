using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class SliderUI : Slider
{
    bool        isSelected = false;
    public bool IsSelected { get => isSelected; protected set => isSelected = value; }

    public override void OnSelect(BaseEventData eventData)
    {
        base.OnSelect(eventData);
        isSelected = true;
    }

    public override void OnDeselect(BaseEventData eventData)
    {
        base.OnDeselect(eventData);
        isSelected = false;
    }
}