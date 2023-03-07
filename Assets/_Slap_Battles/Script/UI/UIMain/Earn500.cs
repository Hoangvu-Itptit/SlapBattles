using UnityEngine;

public class Earn500 : MonoBehaviour
{
    public void Get500coins()
    {
        //todo : ads
        MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
        AdsAdapter.Instance.ShowRewardedVideo((() =>
            {
                UI.Instance.ActiveGetMoney(500 / 10, false);
                MainScene.Instance.audioMain.Playaudiosources(CONST.AUDIO_BUTTON_CLICK_NAMEFILE);
            }), (() => UI.Instance.ActiveNotify("Watch failed, Try again!")), PrefData.cur_level,
            AdsAdapter.where.btn_earn_coins_in_game);
    }
}