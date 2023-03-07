using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using Random = UnityEngine.Random;

public class LevelCtl : MonoBehaviour
{
    public GameObject listEnemy;
    public GameObject bot;
    public Transform botTranform;
    public Transform playerTransform;
    public GameObject pac;
    public GameObject chooChoo;
    public GameObject banBan;
    public GameObject gunItems;
    public RankSO rank;
    public bool haveTeleport;
    public bool setInstanTrap;
    private int trapIteminThisLevel;
    public float timeActiveChooChoo, timeActiveBanBan;

    public List<GameObject> listActiveEnemy;
    public List<GameObject> listUnactiveEnemy;
    public List<GameObject> listTrapItems;
    public List<GameObject> listActiveTrapItems;
    public List<GameObject> listActiveItemsTrapused;
    public List<GameObject> listBoostItems;
    public List<GameObject> listActiveBoostItem;
    public List<GameObject> ListActiveHelpItems;
    public static LevelCtl Instance;

    public int testTrap;

    // Start is called before the first frame update
    private void Awake()
    {
        Instance = this;
        var level = PrefData.cur_level;
        AdsAdapter.LogAFAndFB($"level_{level}_start", level.ToString(), level.ToString());
        List<Transform> botTransforms = new List<Transform>();
        for (int i = 0; i < botTranform.childCount; i++)
        {
            botTransforms.Add(botTranform.GetChild(i));
        }

        List<string> name = new List<string>();
        rank.accounts.ForEach(x =>
        {
            name.Add(x.name);
        });
        
        for (int i = 0; i < Mathf.Clamp(PrefData.cur_level, 1, botTranform.childCount); i++)
        {
            var rand = Random.Range(0, botTransforms.Count);
            var gbot = Instantiate(bot, botTranform.GetChild(rand).position, Quaternion.identity, listEnemy.transform);
            gbot.name = "bot " + i;
            botTransforms.RemoveAt(rand);
            rand = Random.Range(0, name.Count);
            gbot.GetComponent<Bot>().targetVariant.targetName = name[rand];
            name.RemoveAt(rand);
        }

        for (int index = 0; index < listEnemy.transform.childCount; index++)
        {
            listActiveEnemy.Add(listEnemy.transform.GetChild(index).gameObject);
        }

        foreach (var enemy in listActiveEnemy)
        {
            var botsc = enemy.GetComponent<Bot>();
            botsc.setSkin = Random.Range(0, 20);
            botsc.setHand = Random.Range(0, Mathf.Clamp(PrefData.cur_hand + 1, 0, 21));
            botsc.Awake();
        }

        trapIteminThisLevel = Random.Range(0, listTrapItems.Count);

        timeActiveChooChoo = timeActiveBanBan = 0f;

#if UNITY_EDITOR
        trapIteminThisLevel = testTrap;
#endif

        setInstanTrap = true;
    }

    public void Start()
    {
        FindTargetforEnemy();
        setInstanTrap = true;
        StartCoroutine(InstanTrap());

        if (PrefData.is_Bigger)
        {
            Player.Instance.transform.localScale = new Vector3(2, 2, 2);
        }
    }

    private void Update()
    {
        ActiveChooChoo();
        
        ActiveBanBan();
    }

    // remove unActive enemy from listActive move to list unActive
    public void RemoveActive(List<GameObject> listActive, List<GameObject> listUnactive)
    {
        listActive.RemoveAll(goj =>
        {
            if (!goj.activeSelf) listUnactive.Add(goj);
            return !goj.activeSelf;
        });
    }

    public void FindTargetforEnemy()
    {
        var count = listActiveEnemy.Count;
        if (listActiveEnemy.Count % 2 == 1)
        {
            var bots = listActiveEnemy[count - 1].GetComponent<Bot>();
            bots.target = Player.Instance.transform;
            bots.rb.velocity = Vector3.zero;
            bots.is_active_navMeshAgent = true;
            bots.isWin = false;
        }

        for (int i = 0; i < count - 1;)
        {
            var bot1 = listActiveEnemy[i].GetComponent<Bot>();
            var bot2 = listActiveEnemy[i + 1].GetComponent<Bot>();

            bot1.rb.velocity = Vector3.zero;
            bot2.rb.velocity = Vector3.zero;
            bot1.is_active_navMeshAgent = true;
            bot2.is_active_navMeshAgent = true;
            bot1.target = bot2.transform;
            bot2.target = bot1.transform;
            var isWin = Random.Range(0, 2);
            if (isWin == 0)
            {
                bot1.isWin = true;
                bot2.isWin = false;
            }
            else
            {
                bot1.isWin = false;
                bot2.isWin = true;
            }

            i += 2;
        }
    }

    public void UnactiveAllItemsInList(List<GameObject> listActive)
    {
        if (listActive != null)
            listActive.ForEach(item =>
            {
                if (item != null)
                    item.SetActive(false);
            });
    }

    public IEnumerator InstanTrap()
    {
        if (PrefData.cur_level <= 5) yield break;
        yield return new WaitForSeconds(3);
        while (true)
        {
            var ui_Ins = UI.Instance;
            if (ui_Ins.tutorial.activeInHierarchy || ui_Ins.bg_Help.activeInHierarchy)
            {
                yield return new WaitForSeconds(1);
                continue;
            }

            if (!setInstanTrap)
            {
                yield break;
            }

            var rand = Random.Range(0, listActiveEnemy.Count + 1);
            Vector3 target = rand == listActiveEnemy.Count
                ? Player.Instance.transform.position
                : listActiveEnemy[rand].transform.position;

            var trap = listActiveTrapItems.FirstOrDefault(ftrap => !ftrap.activeInHierarchy);
            if (trap == null)
            {
                trap = Instantiate(listTrapItems[trapIteminThisLevel]);
                listActiveTrapItems.Add(trap);
            }

            trap.GetComponent<Trap>().target = target;
            trap.SetActive(true);

            yield return new WaitForSeconds(5);
        }
    }

    void ActiveChooChoo()
    {
        if (PrefData.cur_level <= 20) return;
        var uiIns = UI.Instance;
        if (uiIns.isWin || uiIns.tutorial.activeInHierarchy || uiIns.bg_Help.activeInHierarchy) return;
        if (!chooChoo.activeInHierarchy && listEnemy.activeInHierarchy)
        {
            if (timeActiveChooChoo < 30f) timeActiveChooChoo += Time.deltaTime;
            else chooChoo.SetActive(true);
        }
    }

    void ActiveBanBan()
    {
        if (PrefData.cur_level <= 50) return;
        var uiIns = UI.Instance;
        if (uiIns.isWin || uiIns.tutorial.activeInHierarchy || uiIns.bg_Help.activeInHierarchy) return;
        if (listEnemy.activeInHierarchy)
        {
            if (timeActiveBanBan < 60f) timeActiveBanBan += Time.deltaTime;
            else
            {
                Instantiate(banBan);
                timeActiveBanBan = 0;
            }
        }
    }
}