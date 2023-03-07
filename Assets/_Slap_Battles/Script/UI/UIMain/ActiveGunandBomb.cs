using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

public class ActiveGunandBomb : MonoBehaviour
{
    public GameObject bomb;
    public List<GameObject> Items;
    public GameObject tutorial;

    public void BtnListener_ActiveGBOnClick()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        tutorial.gameObject.SetActive(false);
    }

    public void BtnListener_ActiveGBOnDown()
    {
        var player = Player.Instance;
        if (!UI.Instance.joystick.transform.parent.gameObject.activeInHierarchy) return;
        if (player.isThrow) return;
    }

    public void BtnListener_ActiveGBOnUp()
    {
        var player = Player.Instance;

        if (!UI.Instance.joystick.transform.parent.gameObject.activeInHierarchy) return;
        if (player.isThrow) return;

        if (PrefData.cur_coin < 500)
        {
            UI.Instance.ActiveNotify("Not enough coin");
            return;
        }
        else PrefData.cur_coin -= 500;

        var pos = player.transform.position;
        ActiveBomb(pos);
    }

    void ActiveBomb(Vector3 pos)
    {
        var player = Player.Instance;
        player.isThrow = true;
        var nbomb = Active<iBomb>(bomb, pos);
        player.isThrow = false;
    }

    GameObject Active<T>(GameObject species, Vector3 pos)
    {
        var item = Items.FirstOrDefault(x => !x.activeInHierarchy && x.GetComponent<T>() != null);
        if (item == null)
        {
            item = Instantiate(species);
            Items.Add(item);
        }

        item.transform.position = pos - Vector3.back / 2;
        item.SetActive(true);
        return item;
    }
}