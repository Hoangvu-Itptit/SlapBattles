using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WheelClock : MonoBehaviour
{
    public Text txt_Clock;

    // Start is called before the first frame update

    // Update is called once per frame
    void Update()
    {
        var last = PrefData.get_last_free_wheel();
        var now = DateTime.Now;
        var time = now - last;
        time = new TimeSpan(0, 10, 0).Subtract(time);
        var sc = time.Seconds.ToString();
        var mn = time.Minutes.ToString();
        if (time.CompareTo(TimeSpan.Zero) <= 0)
        {
            PrefData.is_free_wheel = true;
            txt_Clock.text = "SPIN NOW";
            return;
        }

        if (time.Seconds < 10) sc = "0" + sc;
        if (time.Minutes < 10) mn = "0" + mn;
        txt_Clock.text = mn + ":" + sc;
    }
}