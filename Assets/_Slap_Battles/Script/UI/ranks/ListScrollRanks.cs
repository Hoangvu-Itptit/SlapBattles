using System.Collections.Generic;
using UnityEngine;

public class ListScrollRanks : MonoBehaviour
{
    public List<Account> allAccounts;
    public RankSO ranks;

    private void OnEnable()
    {
        allAccounts = new List<Account>();
        ranks.accounts.ForEach(x => allAccounts.Add(x));
        allAccounts.Add(new Account(PrefData.player_name, PrefData.player_point));
        allAccounts.Sort((account, account1) => -account.point.CompareTo(account1.point));
    }
}