using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankScrollViewCtl : MonoBehaviour
{
    public void BtnListener_Close()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        transform.parent.parent.gameObject.SetActive(false);
    }
}