using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Win : BasePopup
{
    public ButtonEffectLogic btn_Collect;

    public ButtonEffectLogic btn_Collectx3;

    public GameObject loading;

    public GameObject EffectWin;

    public SlicedFilledImage loadingTile;

    private float timer = 0f;

    private void Start()
    {
        var level = PrefData.cur_level;
        AdsAdapter.LogAFAndFB($"level_{level}_win", level.ToString(), level.ToString());
        StartCoroutine(ActiveCollect());
        Instantiate(EffectWin, Player.Instance.transform.position + Vector3.up * 2, Quaternion.Euler(-90, 0, 0));
    }

    // Update is called once per frame
    void Update()
    {
        Player.Instance.animator.Play(CONST.PLAYER_VICTORY_IDLE_ANIMATE);
    }

    public void BtnListener_Collect()
    {
        //load this scene
        //test
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        PrefData.cur_level++;
        PrefData.num_level_play++;
        PrefData.is_Bigger = false;

        StartCoroutine(UI.Instance.GetMoney(5, false));
        StartCoroutine(Load(5));
        btn_Collectx3.gameObject.SetActive(false);
        btn_Collect.gameObject.SetActive(false);
    }

    public void BtnListener_Collectx3()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                PrefData.cur_level++;
                PrefData.num_level_play++;
                PrefData.is_Bigger = false;
                StartCoroutine(UI.Instance.GetMoney(15, false));
                StartCoroutine(Load(15));
                btn_Collectx3.gameObject.SetActive(false);
                btn_Collect.gameObject.SetActive(false);
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_coins_in_game);
    }

    IEnumerator Load(int num)
    {
        yield return new WaitForSeconds(num * 0.1f);
        timer = 0;
        loading.SetActive(true);
        while (true)
        {
            var timeLoading = 1f;
            timer += Time.deltaTime;
            if (timer < timeLoading)
            {
                loadingTile.fillAmount = Mathf.Clamp(timer, 0, timeLoading) / timeLoading;
            }
            else
            {
                DOTween.KillAll();
                SceneManager.LoadScene(CONST.MENU_SCENE);
                yield break;
            }

            yield return new WaitForSeconds(Time.deltaTime);
        }
    }

    IEnumerator ActiveCollect()
    {
        yield return new WaitForSeconds(5f);
        btn_Collect.gameObject.SetActive(true);
    }

    public void OnEnable()
    {
        Show();
    }
}