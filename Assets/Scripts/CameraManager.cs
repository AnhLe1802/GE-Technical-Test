using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraManager : MonoBehaviour
{
    [SerializeField] Camera   camera;
    [SerializeField] SliderUI sizeSlider;
    [SerializeField] SliderUI speedSlider;

    float   minSize    = 2.0f;
    float   maxSize    = 16.0f;
    float   speed      = 10.0f;
    bool    isDragging = false;
    Vector3 initialMousePosition;
    Vector3 initialCameraPosition;

    void Start()
    {
        sizeSlider.value = Mathf.InverseLerp(minSize, maxSize, camera.orthographicSize);
        sizeSlider.onValueChanged.AddListener(UpdateCameraSize);
    }

    void OnDestroy()
    {
        sizeSlider.onValueChanged.RemoveListener(UpdateCameraSize);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            BeginDrag();
        }
        else if (Input.GetMouseButtonUp(0))
        {
            EndDrag();
        }

        if (isDragging)
        {
            Draging();
        }
    }

    void BeginDrag()
    {
        if (sizeSlider.IsSelected) return;
        if (speedSlider.IsSelected) return;

        isDragging            = true;
        initialMousePosition  = Input.mousePosition;
        initialCameraPosition = transform.position;
    }

    void Draging()
    {
        Vector3 offset = camera.ScreenToWorldPoint(Input.mousePosition) - camera.ScreenToWorldPoint(initialMousePosition);
        transform.position = Vector3.Lerp(transform.position, initialCameraPosition - offset, speed * Time.deltaTime);
    }

    void EndDrag()
    {
        isDragging = false;
    }

    void UpdateCameraSize(float value)
    {
        float newSize = Mathf.Lerp(minSize, maxSize, value);
        camera.orthographicSize = newSize;
    }
}