using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Banners : MonoBehaviour
{
    public Audio audio;

    public IEnumerator SetBanner()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).gameObject.SetActive(false);
        }

        var rand = Random.Range(0, 4);
#if UNITY_EDITOR
        rand = 2;
#endif
        switch (rand)
        {
            case 0:
                audio.Playaudiosources(CONST.AUDIO_GREATJOB_NAMEFILE_ + Random.Range(1, 5));
                break;
            case 1:
                audio.Playaudiosources(CONST.AUDIO_COOL_NAMEFILE);
                break;
            case 2:
                audio.Playaudiosources(CONST.AUDIO_PERFECT_NAMEFILE_ + Random.Range(1, 3));
                break;
            case 3:
                audio.Playaudiosources(CONST.AUDIO_WOW_NAMEFILE_ + Random.Range(1, 3));
                break;
        }

        transform.GetChild(rand).localScale = new Vector3(0, 0, 0);
        transform.GetChild(rand).gameObject.SetActive(true);
        yield return new WaitForSeconds(1.1f);
        transform.GetChild(rand).DOScale(0, 0.2f);
        yield return new WaitForSeconds(0.2f);
        transform.GetChild(rand).gameObject.SetActive(false);
    }
}