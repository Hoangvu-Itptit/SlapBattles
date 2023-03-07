using UnityEngine;

public class Tutorial : MonoBehaviour
{
    private void OnDisable()
    {
        var uiIns = UI.Instance;
        uiIns.joystick.transform.parent.gameObject.SetActive(true);

        if (PrefData.cur_level <= 5)
        {
            uiIns.release.SetActive(true);
            uiIns.ranksInGame.gameObject.SetActive(false);
        }
        else if (PrefData.cur_level > 10)
        {
#if UNITY_EDITOR
            return;
#endif
            LevelCtl.Instance.pac.SetActive(true);
        }
    }
}