using Mosframe;
using UnityEngine;

public class DynamicscrollViewItemExampleSlabBattles : DynamicScrollViewItemExample
{
    public ListScrollRanks ranks;


    public override void onUpdateItem(int index)
    {
        title.text = string.Format(ranks.allAccounts[(index)].name + " : " + ranks.allAccounts[(index)].point);
        if (ranks.allAccounts[index].name == PrefData.player_name)
        {
            background.color = Color.yellow;
        }
        else
        {
            background.color = Color.white;
        }
    }
}