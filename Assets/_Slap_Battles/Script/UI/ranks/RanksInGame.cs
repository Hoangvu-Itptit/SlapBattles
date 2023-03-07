using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class RanksInGame : MonoBehaviour
{
    public RankSO ranks;

    [HideInInspector] public List<Account> accounts;
    public Transform ranksParent;

    private void Awake()
    {
        UpdateRanks();
    }

    // Start is called before the first frame update
    void Start()
    {
        UpdateRanks();
    }

    public void UpdateRanks()
    {
        accounts = new List<Account>();
        ranks.accounts.ForEach(acc=>accounts.Add(acc));
        Account player = new Account(PrefData.player_name, PrefData.player_point);
        accounts.Add(player);
        accounts.Sort((account, account1) => -account.point.CompareTo(account1.point));

        ranksParent.GetChild(0).GetChild(0).GetComponent<Text>().text = "1." + accounts[0].name;
        ranksParent.GetChild(1).GetChild(0).GetComponent<Text>().text = "2." + accounts[1].name;
        ranksParent.GetChild(2).GetChild(0).GetComponent<Text>().text = "3." + accounts[2].name;
        ranksParent.GetChild(3).GetChild(0).GetComponent<Text>().text = "4." + accounts[3].name;

        List<int> accPoint = new List<int>();
        accounts.ForEach(acc=>accPoint.Add(acc.point));
        accPoint.Sort(((i, i1) => i.CompareTo(i1)));
        var playerRanks = accPoint.Count - Array.BinarySearch(accPoint.ToArray(), player.point);

        ranksParent.GetChild(4).GetChild(0).GetComponent<Text>().text = playerRanks + "." + player.name;
    }
}