using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainScene : MonoBehaviour
{
    public Camera cam;
    public List<GameObject> levelPrefab;
    public Transform levelParent;
    public Audio audioMain;
    public static MainScene Instance;
    private int level;
    
    private void Awake()
    {
        Instance = this;
        level = PrefData.cur_level;
        // PrefData.cur_coin = 999999;
        if (UI.Instance.menu == null)
        {
            BuildLevel(1);
        }
        else
        {
            // for (int i = 0; i < 21; i++)
            // {
            //     PrefData.set_earn_skin(i + 1);
            // }
            //
            // for (int i = 18; i < 21; i++)
            // {
            //     PrefData.set_earn_skin(i + 1, 2);
            // }
            //
            // for (int i = 0; i < 22; i++)
            // {
            //     PrefData.set_earn_hand(i + 1);
            // }
            //
            // for (int i = 18; i < 22; i++)
            // {
            //     PrefData.set_earn_hand(i + 1, 2);
            // }
        }

        if (cam == null)
        {
            cam = Camera.main;
        }

        AudioListener.volume = PrefData.is_active_sounds ? 1 : 0;
    }

    private float no_touch = 0;
    private void Update()
    {
        if (Input.GetMouseButton((0)))
        {
            no_touch = 0;
        }

        no_touch += Time.deltaTime;

        int duration = 30;
        if (UI.Instance)
        {
            switch (level)
            {
                case > 20:
                    duration = 7;
                    break;
                case > 15:
                    duration = 8;
                    break;
                case > 10:
                    duration = 10;
                    break;
                case > 7:
                    duration = 12;
                    break;
                case > 3:
                    duration = 15;
                    break;
            }

            if (no_touch > duration)
            {
                no_touch = 0;
                AdsAdapter.Instance.ShowInterstitial(level, AdsAdapter.where.no_touch);
            }
        }
    }

    public void BuildLevel(int level)
    {
        Instantiate(levelPrefab[level - 1], levelParent);
    }
}