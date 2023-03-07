// Simple Scroll-Snap - https://assetstore.unity.com/packages/tools/gui/simple-scroll-snap-140884
// Copyright (c) Daniel Lochner

using UnityEngine;

namespace DanielLochner.Assets.SimpleScrollSnap
{
    public class SlotMachine : MonoBehaviour
    {
        public bool checkAds;
        public static bool checkRoll;

        #region Fields

        [SerializeField] public SimpleScrollSnap[] slots;

        #endregion

        #region Methods

        public void Spin()
        {
            checkRoll = false;
            if (checkAds)
            {
                AdsAdapter.Instance.ShowRewardedVideo((() =>
                {
                    checkRoll = true;
                    foreach (SimpleScrollSnap slot in slots)
                    {
                        slot.Velocity += Random.Range(2500, 5000) * Vector2.up;
                    }
                }), (() => {UI.Instance.ActiveNotify("Watch failed, Try again!"); }), PrefData.cur_level, AdsAdapter.where.btn_spin_in_UI_menu);
            }
            else
            {
                checkRoll = true;
                foreach (SimpleScrollSnap slot in slots)
                {
                    slot.Velocity += Random.Range(2500, 5000) * Vector2.up;
                }
            }
        }

        #endregion
    }
}