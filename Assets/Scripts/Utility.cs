using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class TransformExtensions
{
    public static void SetLocalPositionY(this Transform rt, float y)
    {
        rt.localPosition = new Vector2(rt.localPosition.x, y);
    }

    public static void SetLocalPositionX(this Transform rt, float x)
    {
        rt.localPosition = new Vector2(x, rt.localPosition.y);
    }

    public static void SetLocalScaleX(this Transform rt, float y)
    {
        rt.localScale = new Vector2(y, rt.localScale.y);
    }
}