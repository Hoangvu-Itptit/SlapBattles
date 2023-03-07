using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SelectName : MonoBehaviour
{
    public static SelectName instance;
    public TMP_InputField ipf_inputName;

    public ButtonEffectLogic btn_SelectName;

    public RankSO rank;
    public List<Account> accounts;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        rank.accounts.ForEach(acc => accounts.Add(acc));
    }

    void OnEnable()
    {
        if(PrefData.cur_level == 1)
        {
            DOTween.KillAll();
            SceneManager.LoadSceneAsync(CONST.PLAY_MAP_ + 1);
        }
    }

    public void BtnListener_SelectName()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        if (string.IsNullOrWhiteSpace(ipf_inputName.text))
        {
            UI.Instance.ActiveNotify("You need to enter you name!");
        }
        else
        {
            var name = ipf_inputName.text;

            foreach (var acc in accounts)
            {
                if (name == acc.name)
                {
                    UI.Instance.ActiveNotify("Your name has been duplicated!");
                    return;
                }
            }
            PrefData.player_name = ipf_inputName.text;
            PrefData.is_select_name = true;
            gameObject.SetActive(false);
        }
    }

    private void OnDisable()
    {
        UI.Instance.menu.dailyReward.gameObject.SetActive(true);
    }
}