using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class Hitcollider : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        var otherGoj = other.gameObject;
        var otherPos = other.transform.position;
        var force = (otherPos - transform.position).normalized;
        var lvCtlMono = LevelCtl.Instance.GetComponent<MonoBehaviour>();
        force = new Vector3(force.x, 2, force.z) * 2;
        if (otherGoj.CompareTag(CONST.BOT_TAG))
        {
            var par = transform.parent;
            if (par.GetComponentInParent<Player>() != null)
            {
                SetUI();

                SetBoostItems(otherPos);

                SetHelpItems(otherPos);

                SetPlayer();

                otherGoj.GetComponent<Bot>().is_active_navMeshAgent = false;
                lvCtlMono.StartCoroutine(otherGoj.GetComponent<Bot>().GetForce(force));
            }
            else if (par.GetComponentInParent<Bot>() != null)
            {
                if (!otherGoj.GetComponent<Bot>().isWin)
                {
                    otherGoj.GetComponent<Bot>().is_active_navMeshAgent = false;
                    var parPar = par.parent;
                    var scale = parPar.localScale;
                    scale += new Vector3(0.01f, 0.01f, 0.01f);
                    parPar.DOScale(scale, 0.5f).SetEase(Ease.OutElastic);

                    lvCtlMono.StartCoroutine(otherGoj.GetComponent<Bot>().GetForce(force));
                }
            }
            else if (par.GetComponentInParent<ChooChoo>() != null || par.GetComponentInParent<BanBan>() != null)
            {
                otherGoj.GetComponent<Bot>().is_active_navMeshAgent = false;
                lvCtlMono.StartCoroutine(otherGoj.GetComponent<Bot>().GetForce(force));
            }
        }
        else if (otherGoj.CompareTag(CONST.TRAP_HUMAN_TAG))
        {
            lvCtlMono.StartCoroutine(otherGoj.GetComponent<TrapHuman>().GetForce(force));
        }
        else if (otherGoj.CompareTag(CONST.PLAYER_TAG))
        {
            lvCtlMono.StartCoroutine(otherGoj.GetComponent<Player>().GetForce(force));
        }
    }

    void SetUI()
    {
        var uiIns = UI.Instance;
        uiIns.GetComponent<MonoBehaviour>().StartCoroutine(uiIns.banners.SetBanner());
        uiIns.ranksInGame.UpdateRanks();
        uiIns.powerFill.Uppower();
    }

    void SetPlayer()
    {
        var player = Player.Instance;
        PrefData.player_point++;
        var playerData = player.playerPower;
        if (player.transform.localScale.x < 3)
        {
            playerData.playerSize += new Vector3(0.01f, 0.01f, 0.01f);
            var scale = player.transform.localScale + new Vector3(0.01f, 0.01f, 0.01f);
            player.transform.DOScale(scale, 0.5f).SetEase(Ease.OutElastic);
        }
    }

    void SetBoostItems(Vector3 otherPos)
    {
        var uiIns = UI.Instance;
        var lvIns = LevelCtl.Instance;
        var rand = Random.Range(1, 10);
#if UNITY_EDITOR
        rand = 5;
#endif
        if (rand == 5)
        {
            PrefData.number_star_have++;
            uiIns.star.SetNumStar();
            var rand2 = Random.Range(0, lvIns.listBoostItems.Count);
            GameObject activeThisBoost;
            if (rand2 == 0) activeThisBoost = Active<BoostSize>(lvIns.listActiveBoostItem);
            else if (rand2 == 1) activeThisBoost = Active<BoostSpeed>(lvIns.listActiveBoostItem);
            else activeThisBoost = Active<BoostHand>(lvIns.listActiveBoostItem);

            if (activeThisBoost == null)
            {
                activeThisBoost = Instantiate(lvIns.listBoostItems[rand2], otherPos + Vector3.up * 1.5f,
                    Quaternion.identity);
                lvIns.listActiveBoostItem.Add(activeThisBoost);
            }
            else
            {
                activeThisBoost.transform.position = otherPos + Vector3.up * 1.5f;
                activeThisBoost.SetActive(true);
            }
        }
    }

    void SetHelpItems(Vector3 otherPos)
    {
        var lvIns = LevelCtl.Instance;
        var rand = Random.Range(1, 20);
#if UNITY_EDITOR
        rand = 5;
#endif
        if (rand == 5)
        {
            GameObject activeThisHelp;
            activeThisHelp = Active<GetGun>(lvIns.ListActiveHelpItems);

            if (activeThisHelp == null)
            {
                activeThisHelp = Instantiate(lvIns.gunItems, otherPos + Vector3.up * 1.5f,
                    Quaternion.identity);
                lvIns.ListActiveHelpItems.Add(activeThisHelp);
            }
            else
            {
                activeThisHelp.transform.position = otherPos + Vector3.up * 1.5f;
                activeThisHelp.SetActive(true);
            }
        }
    }

    GameObject Active<T>(List<GameObject> listItems)
    {
        return listItems.FirstOrDefault(x => !x.activeInHierarchy && x.GetComponent<T>() != null);
    }
}