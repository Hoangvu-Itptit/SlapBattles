using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUp : MonoBehaviour
{
    public GameObject enough, notEnough;

    private void Update()
    {
        if (PrefData.cur_coin < 500)
        {
            enough.gameObject.SetActive(false);
            notEnough.gameObject.SetActive(true);
        }
        else
        {
            enough.gameObject.SetActive(true);
            notEnough.gameObject.SetActive(false);
        }
    }

    public void Power()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        if (PrefData.cur_coin < 500)
        {
            // todo : ads
            AdsAdapter.Instance.ShowRewardedVideo((() =>
                {
                    var player = Player.Instance;
                    var playerPower = player.playerPower;
                    player.transform.localScale = playerPower.playerSize += Vector3.one / 5;
                    player.moveSpeed = playerPower.playerMoveSpeed += playerPower.playerMoveSpeed / 5;
                    playerPower.speedHit += 0.5f;
                }),
                (() =>
                {
                    UI.Instance.ActiveNotify("Watch failed, Try again!");
                }), PrefData.cur_level,
                AdsAdapter.where.btn_size_up_in_game);
        }
        else
        {
            PrefData.cur_coin -= 500;
            var player = Player.Instance;
            var playerPower = player.playerPower;
            player.transform.localScale = playerPower.playerSize += Vector3.one / 5;
            player.moveSpeed = playerPower.playerMoveSpeed += playerPower.playerMoveSpeed / 5;
            playerPower.speedHit += 0.5f;
        }
    }
}