using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Account
{
    public string name;
    public int point;

    public Account(string name, int point)
    {
        this.name = name;
        this.point = point;
    }
}

[CreateAssetMenu(fileName = "rank_Account", menuName = "datas/rank_Account")]
public class RankSO : ScriptableObject
{
    public List<Account> accounts;
}