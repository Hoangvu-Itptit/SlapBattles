using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OneMoreSpin : MonoBehaviour
{
    private float timer;

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        var fill = 1 - timer / 5;
        if (timer >= 5f)
        {
            fill = 0;
        }
        transform.GetChild(0).GetChild(0).gameObject.GetComponent<SlicedFilledImage>().fillAmount = fill;
    }

    private void OnEnable()
    {
        timer = 0;
    }
}