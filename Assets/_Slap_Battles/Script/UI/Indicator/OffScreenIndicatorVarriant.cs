using PixelPlay.OffScreenIndicator;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

/// <summary>
/// Attach the script to the off screen indicator panel.
/// </summary>
[DefaultExecutionOrder(-1)]
public class OffScreenIndicatorVarriant : MonoBehaviour
{
    [Range(0.5f, 0.9f)]
    [Tooltip("Distance offset of the indicators from the centre of the screen")]
    [SerializeField] private float screenBoundOffset = 0.9f;

    private Camera mainCamera;
    private Vector3 screenCentre;
    private Vector3 screenBounds;

    private List<Targetvariant> targets = new List<Targetvariant>();

    public static Action<Targetvariant, bool> TargetStateChanged;

    void Awake()
    {
        mainCamera = Camera.main;
        screenCentre = new Vector3(Screen.width, Screen.height, 0) / 2;
        screenBounds = screenCentre * screenBoundOffset;
        TargetStateChanged += HandleTargetStateChanged;
    }

    void LateUpdate()
    {
        DrawIndicators();
    }

    /// <summary>
    /// Draw the indicators on the screen and set thier position and rotation and other properties.
    /// </summary>
    void DrawIndicators()
    {
        foreach(Targetvariant target in targets)
        {
            Vector3 screenPosition = OffScreenIndicatorCore.GetScreenPosition(mainCamera, target.transform.position);
            bool isTargetVisible = OffScreenIndicatorCore.IsTargetVisible(screenPosition);
            float distanceFromCamera = target.NeedDistanceText ? target.GetDistanceFromCamera(mainCamera.transform.position) : float.MinValue;// Gets the target distance from the camera.
            IndicatorVariant indicatorVariant = null;

            if(target.NeedBoxIndicator && isTargetVisible)
            {
                screenPosition.z = 0;
                indicatorVariant = GetIndicator(ref target.indicator, IndicatorTypeVariant.BOX); // Gets the box indicator from the pool.
            }
            else if(target.NeedArrowIndicator && !isTargetVisible)
            {
                float angle = float.MinValue;
                OffScreenIndicatorCore.GetArrowIndicatorPositionAndAngle(ref screenPosition, ref angle, screenCentre, screenBounds);
                indicatorVariant = GetIndicator(ref target.indicator, IndicatorTypeVariant.ARROW); // Gets the arrow indicator from the pool.
                indicatorVariant.imgparent.transform.rotation = Quaternion.Euler(0, 0, 0);
                if (target.targetType == TargetType.Arrow || target.targetType == TargetType.Monster)
                {
                    indicatorVariant.imgparent.transform.rotation = Quaternion.Euler(0, 0, angle * Mathf.Rad2Deg); // Sets the rotation for the arrow indicator.
                }
                // indicatorVariant.txtTutorial.alignment.
                if (PrefData.cur_level <= 5)
                {
                    var screenRotabigger = Mathf.Atan2(Screen.height, Screen.width);
                    var pi = Mathf.PI;
                    var ttrl = indicatorVariant.txtTutorial;
                    // var pos = ttrl.GetComponent<RectTransform>().position;
                    if (angle > 0)
                    {
                        // if (pos.y > 0) ttrl.GetComponent<RectTransform>().localPosition -= new Vector3(0, 300, 0);
                        if (angle < screenRotabigger) ttrl.alignment = TextAnchor.MiddleRight;
                        else if (angle > pi - screenRotabigger) ttrl.alignment = TextAnchor.MiddleLeft;
                        else ttrl.alignment = TextAnchor.MiddleCenter;
                    }
                    else
                    {
                        // if (pos.y < 0) ttrl.GetComponent<RectTransform>().localPosition += new Vector3(0, 300, 0);
                        if (angle > -screenRotabigger) ttrl.alignment = TextAnchor.MiddleRight;
                        else if (angle < -pi + screenRotabigger) ttrl.alignment = TextAnchor.MiddleLeft;
                        else ttrl.alignment = TextAnchor.MiddleCenter;
                    }
                }
            }
            if(indicatorVariant)
            {
                indicatorVariant.SetImageColor(target);// Sets the image color of the indicator.
                indicatorVariant.CheckTarget(target);
                indicatorVariant.SetDistanceText(distanceFromCamera); //Set the distance text for the indicator.
                indicatorVariant.transform.position = screenPosition; //Sets the position of the indicator on the screen.
                indicatorVariant.SetTextRotation(Quaternion.identity); // Sets the rotation of the distance text of the indicator.
            }
        }
    }

    /// <summary>
    /// 1. Add the target to targets list if <paramref name="active"/> is true.
    /// 2. If <paramref name="active"/> is false deactivate the targets indicator, 
    ///     set its reference null and remove it from the targets list.
    /// </summary>
    /// <param name="target"></param>
    /// <param name="active"></param>
    private void HandleTargetStateChanged(Targetvariant target, bool active)
    {
        if(active)
        {
            targets.Add(target);
        }
        else
        {
            target.indicator?.Activate(false);
            target.indicator = null;
            targets.Remove(target);
        }
    }

    /// <summary>
    /// Get the indicator for the target.
    /// 1. If its not null and of the same required <paramref name="type"/> 
    ///     then return the same indicator;
    /// 2. If its not null but is of different type from <paramref name="type"/> 
    ///     then deactivate the old reference so that it returns to the pool 
    ///     and request one of another type from pool.
    /// 3. If its null then request one from the pool of <paramref name="type"/>.
    /// </summary>
    /// <param name="indicator"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    private IndicatorVariant GetIndicator(ref IndicatorVariant indicator, IndicatorTypeVariant type)
    {
        if(indicator != null)
        {
            if(indicator.Type != type)
            {
                indicator.Activate(false);
                indicator = type == IndicatorTypeVariant.BOX ? VariantBoxObjectPool.current.GetPooledObject() : VariantArrowObjectPool.current.GetPooledObject();
                indicator.Activate(true); // Sets the indicator as active.
            }
        }
        else
        {
            indicator = type == IndicatorTypeVariant.BOX ? VariantBoxObjectPool.current.GetPooledObject() : VariantArrowObjectPool.current.GetPooledObject();
            indicator.Activate(true); // Sets the indicator as active.
        }
        return indicator;
    }

    private void OnDestroy()
    {
        TargetStateChanged -= HandleTargetStateChanged;
    }
}
