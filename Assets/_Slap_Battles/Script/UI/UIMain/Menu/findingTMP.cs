using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class findingTMP : MonoBehaviour
{
    public Text find;

    public Text txt_clock;

    IEnumerator Start()
    {
        int dem = 0, sc = 0, min = 0;
        float time = 0f;
        var cur_text = find.text;
        while (true)
        {
            dem++;
            find.text = cur_text;
            for (int i = 0; i < dem; i++)
            {
                find.text += ".";
            }

            string s, m;
            if (sc < 10)
            {
                s = "0" + sc;
            }
            else
            {
                s = sc + "";
            }

            if (min < 10)
            {
                m = "0" + min;
            }
            else
            {
                m = min + "";
            }

            txt_clock.text = m + ":" + s;
            time += 0.5f;
            sc = (int)  time;
            if (dem >= 3) dem = 0;
            yield return new WaitForSeconds(0.5f);
        }
    }
}