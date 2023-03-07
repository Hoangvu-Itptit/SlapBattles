using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UI : MonoBehaviour
{
    public Joystick joystick;
    public Menu menu;
    public Win win;
    public AudioClip audioWin;
    public AudioClip audioLose;
    public AudioClip spawn;
    public AudioClip reward;
    public Lose lose;
    public GameObject img_notify;
    public GameObject tutorial;
    public GameObject moneyPrefabs;
    public GameObject bg_Help;
    public GameObject release;
    public GameObject activeBombandGun;
    public GameObject congra;
    public GameObject noInernet;
    public Text numberPlayer;
    public ButtonEffectLogic earn500;
    public PowerUp btnPowerUp;
    public LuckyBox luckyBox;
    public RanksInGame ranksInGame;
    public Banners banners;
    public SetStar star;
    public Text txt_moneyCount;
    public Power powerFill;
    public bool isWin = false, isLose = false;
    public List<GameObject> activeMoney;
    public static UI Instance;
    private int level;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }

        level = PrefData.cur_level;
        DOVirtual.DelayedCall(0.1f, ()=> AdsAdapter.Instance.ShowBanner());
    }

    private void OnDestroy()
    {
        Instance = null;
    }

    // Update is called once per frame
    void Update()
    {
        if (tutorial != null)
        {
            if ((tutorial.activeInHierarchy && Input.GetMouseButtonDown(0)) && !bg_Help.activeInHierarchy)
            {
                tutorial.SetActive(false);
            }
        }

        txt_moneyCount.text = PrefData.cur_coin + "";
        if (menu == null) // ingame
        {
            if (lose.gameObject.activeInHierarchy)
            {
                win.gameObject.SetActive(false);
            }
            if (level == 1)
            {
                bg_Help.SetActive(false);
                earn500.gameObject.SetActive(false);
                btnPowerUp.gameObject.SetActive(false);
                activeBombandGun.gameObject.SetActive(false);
                powerFill.gameObject.SetActive(false);
                star.gameObject.SetActive(false);
            }
        }

        if ((Application.internetReachability == NetworkReachability.NotReachable) && !noInernet.activeInHierarchy)
        {
            noInernet.SetActive(true);
            noInernet.GetComponent<NoInternet>().Active();
        }
    }

    public void Listener_Win()
    {
        ActiveCongra();
        MainScene.Instance.audioMain.Playaudiosources(audioWin, false);
        isWin = true;
        if (joystick != null)
        {
            joystick.transform.parent.gameObject.SetActive(false);
        }

        if (PrefData.number_star_have >= 3)
        {
            luckyBox.gameObject.SetActive(true);
            PrefData.number_star_have = 0;
        }

        ranksInGame.gameObject.SetActive(false);
        powerFill.gameObject.SetActive(false);
        release.SetActive(false);
        activeBombandGun.SetActive(false);
        earn500.gameObject.SetActive(false);
        btnPowerUp.gameObject.SetActive(false);
        numberPlayer.gameObject.SetActive(false);
        bg_Help.gameObject.SetActive(false);
        tutorial.SetActive(false);

        var LV_Ins = LevelCtl.Instance;
        LV_Ins.StopCoroutine(LV_Ins.InstanTrap());
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listActiveTrapItems);
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listActiveEnemy);
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listActiveBoostItem);
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listUnactiveEnemy);
        LV_Ins.RemoveActive(LV_Ins.listActiveEnemy, LV_Ins.listUnactiveEnemy);
        LV_Ins.setInstanTrap = false;
        LV_Ins.pac.SetActive(false);
        foreach (var item in LV_Ins.ListActiveHelpItems)
        {
            item.SetActive(false);
        }

        var player = Player.Instance;
        player.transform.GetChild(1).gameObject.SetActive(false);
        player.rb.velocity = Vector3.zero;
        player.rb.constraints = RigidbodyConstraints.FreezeAll;
        player.animator.Play(CONST.PLAYER_VICTORY_IDLE_ANIMATE);
        player.GetComponent<Targetvariant>().enabled = false;
        var cam = MainScene.Instance.cam;
        if (cam != null)
        {
            cam.GetComponent<CameraCtl>().enabled = false;
            var playerPos = player.transform.position;
            var pos = playerPos + (cam.transform.position - playerPos).normalized * 10;

            cam.transform.DOMove(pos, 3).SetDelay(2).SetEase(Ease.OutQuart).OnComplete((() =>
            {
                cam.gameObject.SetActive(false);
                player.transform.GetChild(0).gameObject.SetActive(true);
                win.gameObject.SetActive(true);
            }));
        }

        player.transform.GetChild(1).gameObject.SetActive(false);
        if (banners != null)
        {
            banners.gameObject.SetActive(false);
        }

        AdsAdapter.Instance.ShowInterstitial(PrefData.cur_level, AdsAdapter.where.popup_win_in_game);
    }

    public void Listener_Lose()
    {
        MainScene.Instance.audioMain.Playaudiosources(audioLose, false);
        isLose = true;
        joystick.transform.parent.gameObject.SetActive(false);

        if (PrefData.number_star_have >= 3)
        {
            luckyBox.gameObject.SetActive(true);
            PrefData.number_star_have = 0;
        }

        ranksInGame.gameObject.SetActive(false);
        powerFill.gameObject.SetActive(false);
        release.SetActive(false);
        activeBombandGun.SetActive(false);
        earn500.gameObject.SetActive(false);
        btnPowerUp.gameObject.SetActive(false);
        numberPlayer.gameObject.SetActive(false);
        banners.gameObject.SetActive(false);

        var LV_Ins = LevelCtl.Instance;
        LV_Ins.StopCoroutine(LV_Ins.InstanTrap());
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listActiveTrapItems);
        LV_Ins.UnactiveAllItemsInList(LV_Ins.listActiveBoostItem);
        LV_Ins.setInstanTrap = false;
        LV_Ins.listEnemy.SetActive(false);
        LV_Ins.pac.SetActive(false);
        foreach (var item in LV_Ins.ListActiveHelpItems)
        {
            item.SetActive(false);
        }

        var player = Player.Instance;
        player.rb.velocity = Vector3.zero;
        player.transform.position = LV_Ins.playerTransform.position;
        player.animator.Play(CONST.PLAYER_DEFEAT_ANIMATE);
        var cam = MainScene.Instance.cam;
        cam.gameObject.SetActive(false);
        player.transform.GetChild(0).gameObject.SetActive(true);
        player.GetComponent<Targetvariant>().enabled = false;

        win.gameObject.SetActive(false);
        lose.gameObject.SetActive(true);

        player.transform.GetChild(1).gameObject.SetActive(false);
        AdsAdapter.Instance.ShowInterstitial(PrefData.cur_level, AdsAdapter.where.popup_lose_in_game);
    }

    public IEnumerator GetMoney(int num, bool reload = true)
    {
        PrefData.cur_coin += num * 10;
        var canvas = gameObject.GetComponent<RectTransform>();
        var rect = canvas.rect;
        var pos = canvas.position;
        MainScene.Instance.audioMain.Playaudiosources(spawn, false);
        for (int i = 0; i < num; i++)
        {
            var money = activeMoney.FirstOrDefault(o => !o.activeInHierarchy);
            if (money == null)
            {
                money = Instantiate(moneyPrefabs, transform);
                activeMoney.Add(money);
            }
            else
            {
                money.transform.position = Vector3.zero;
                money.SetActive(true);
            }

            var width = rect.width / 2 - 250;
            var height = rect.height / 2 - 200;
            money.GetComponent<RectTransform>().position = pos;
            money.GetComponent<Money>().target = new Vector2(width, height);
            money.GetComponent<Money>().CoinMove();
            yield return new WaitForSeconds(0.1f);
        }

        MainScene.Instance.audioMain.Playaudiosources(reward, false);
        if (reload)
        {
            yield return new WaitForSeconds(1);
            SceneManager.LoadScene(CONST.MENU_SCENE);
        }
    }

    public void ActiveGetMoney(int num, bool reload = true)
    {
        StartCoroutine(GetMoney(num, reload));
    }

    public void ActiveNotify(string notify, float startTime = 0.3f, float waitTime = 1.5f)
    {
        img_notify.transform.localScale = new Vector3(0, 1, 1);
        var setting = img_notify.GetComponent<Notify>();
        setting.notify = notify;
        setting.startTime = startTime;
        setting.waitTime = waitTime;
        setting.Show();
    }

    public void ActiveCongra()
    {
        congra.SetActive(false);
        congra.SetActive(true);
    }
}