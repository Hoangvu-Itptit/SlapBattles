using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Lose : BasePopup
{
    public GameObject loading, loseDisplay;
    public SlicedFilledImage loadingTile;
    public Text loseCountDown;
    public NoInternet noInterNetImage;
    public ButtonEffectLogic replayads, home;
    private float timer = 0f;

    private void Start()
    {
        var level = PrefData.cur_level;
        AdsAdapter.LogAFAndFB($"level_{level}_lose", level.ToString(), level.ToString());
    }

    public void BtnListener_Home()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        PrefData.is_Bigger = false;
        StartCoroutine(Load(0));
    }

    public void BtnListener_Replayads()
    {
        //ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                StartCoroutine(RePlay());
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_replay_in_game);
    }

    IEnumerator RePlay()
    {
        var uiIns = UI.Instance;
        var lvIns = LevelCtl.Instance;
        MainScene.Instance.cam.gameObject.SetActive(true);

        var player = Player.Instance;
        var playercur = player.playerPower;
        player.transform.GetChild(0).gameObject.SetActive(false);
        player.transform.GetChild(1).gameObject.SetActive(true);
        player.transform.localScale = playercur.playerSize;
        player.moveSpeed = playercur.playerMoveSpeed;
        player.transform.GetChild(1).localScale = playercur.playerHitColliderSize;
        player.isDie = false;
        player.isHitDie = false;
        player.GetComponent<Targetvariant>().enabled = true;

        loseDisplay.SetActive(false);
        loseCountDown.gameObject.SetActive(true);
        loseCountDown.transform.DOScale(2, 1).SetLoops(4, LoopType.Restart);
        for (int i = 3; i > 0; i--)
        {
            loseCountDown.text = i.ToString();

            yield return new WaitForSeconds(1);
        }

        loseCountDown.text = "Play";
        yield return new WaitForSeconds(1);
        loseCountDown.gameObject.SetActive(false);

        uiIns.joystick.transform.parent.gameObject.SetActive(true);
        uiIns.isLose = false;
        uiIns.banners.gameObject.SetActive(true);
        var bnr = uiIns.banners.transform;
        for (int i = 0; i < bnr.childCount; i++)
        {
            bnr.GetChild(i).gameObject.SetActive(false);
        }

        uiIns.ranksInGame.gameObject.SetActive(true);
        uiIns.powerFill.gameObject.SetActive(true);
        uiIns.activeBombandGun.SetActive(true);
        uiIns.earn500.gameObject.SetActive(true);
        uiIns.btnPowerUp.gameObject.SetActive(true);
        uiIns.numberPlayer.gameObject.SetActive(true);
        uiIns.txt_moneyCount.gameObject.SetActive(true);

        if (PrefData.cur_level <= 5)
        {
            uiIns.release.SetActive(true);
        }

        lvIns.listEnemy.SetActive(true);
        lvIns.listActiveEnemy = new List<GameObject>();
        if (PrefData.cur_level >= 10) lvIns.pac.SetActive(true);
        lvIns.timeActiveChooChoo = 0;

        var enemyPar = lvIns.listEnemy.transform;
        for (int i = 0; i < enemyPar.childCount; i++)
        {
            if (enemyPar.GetChild(i).gameObject.activeInHierarchy)
            {
                lvIns.listActiveEnemy.Add(lvIns.listEnemy.transform.GetChild(i).gameObject);
                var bot = enemyPar.GetChild(i).GetComponent<Bot>();
                bot.is_active_navMeshAgent = true;
                bot.isHit = false;
                enemyPar.GetChild(i).GetChild(1).GetChild(bot.setHand).GetComponent<MeshCollider>().enabled = false;
            }
        }

        lvIns.Start();
        loseDisplay.SetActive(true);
        gameObject.SetActive(false);

        if (LevelCtl.Instance.listActiveEnemy.Count == 0)
        {
            UI.Instance.Listener_Win();
        }
        else
        {
            lvIns.FindTargetforEnemy();
        }
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

    private void OnEnable()
    {
        StartCoroutine(ActiveHome());
        Show();
    }

    IEnumerator ActiveHome()
    {
        home.gameObject.SetActive(false);
        yield return new WaitForSeconds(5f);
        home.gameObject.SetActive(true);
    }

    public void BtnListener_EarnCoins()
    {
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        //todo ads
        AdsAdapter.Instance.ShowRewardedVideo((() => { UI.Instance.ActiveGetMoney(3, false); }),
            (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_coins_in_game);
    }
}