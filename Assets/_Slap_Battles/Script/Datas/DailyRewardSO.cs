using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class day
{
    public int coins;
    public int skin;
}

[CreateAssetMenu(fileName = "daily_Reward", menuName = "datas/daily_Reward")]
public class DailyRewardSO : ScriptableObject
{
    public List<day> dailyReward;
}