using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// Assign this script to the indicator prefabs.
/// </summary>
public class IndicatorVariant : MonoBehaviour
{
    [SerializeField] private IndicatorTypeVariant indicatorType;

    private Image indicatorImage;

    public Transform imgparent;

    public Text txtTutorial;

    public Text txtName;

    /// <summary>
    /// Gets if the game object is active in hierarchy.
    /// </summary>
    public virtual bool Active
    {
        get { return transform.gameObject.activeInHierarchy; }
    }

    /// <summary>
    /// Gets the indicator type
    /// </summary>
    public IndicatorTypeVariant Type
    {
        get { return indicatorType; }
    }

    protected virtual void Awake()
    {
        indicatorImage = imgparent.GetChild(0).GetComponent<Image>();
    }

    /// <summary>
    /// Sets the image color for the indicator.
    /// </summary>
    /// <param name="target"></param>
    public virtual void SetImageColor(Targetvariant target)
    {
        for (int index = 0; index < imgparent.childCount; index++)
        {
            imgparent.GetChild(index).gameObject.SetActive(false);
        }

        imgparent.GetChild((int)target.targetType).gameObject.SetActive(true);
        indicatorImage = imgparent.GetChild((int)target.targetType).GetComponent<Image>();
        indicatorImage.color = target.TargetColor;
    }

    public virtual void CheckTarget(Targetvariant target)
    {
        if (PrefData.cur_level >= 2) txtTutorial.gameObject.SetActive(false);

        if (target.targetType == TargetType.Bomb) txtTutorial.gameObject.SetActive(true);

        if (target.targetType == TargetType.Arrow || target.targetType == TargetType.Player)
        {
            txtName.gameObject.SetActive(true);
        }
        else txtName.gameObject.SetActive(false);

        if (indicatorType == IndicatorTypeVariant.BOX)
        {
            if (target.targetType == TargetType.Arrow)
            {
                txtName.text = target.targetName;
            }
            else if (target.targetType == TargetType.Bomb)
            {
                txtTutorial.text = target.targetString;
            }
            else if (target.targetType == TargetType.Player)
            {
                txtName.text = PrefData.player_name;
                txtName.color = target.TargetColor;
                txtTutorial.gameObject.SetActive(false);
                imgparent.GetChild((int)target.targetType).gameObject.SetActive(false);
            }
        }
    }

    /// <summary>
    /// Sets the distance text for the indicator.
    /// </summary>
    /// <param name="value"></param>
    public virtual void SetDistanceText(float value)
    {
        // distanceText.text = value >= 0 ? Mathf.Floor(value) + " m" : "";
    }

    /// <summary>
    /// Sets the distance text rotation of the indicator.
    /// </summary>
    /// <param name="rotation"></param>
    public virtual void SetTextRotation(Quaternion rotation)
    {
        // distanceText.rectTransform.rotation = rotation;
    }

    /// <summary>
    /// Sets the indicator as active or inactive.
    /// </summary>
    /// <param name="value"></param>
    public virtual void Activate(bool value)
    {
        transform.gameObject.SetActive(value);
    }
}

public enum IndicatorTypeVariant
{
    BOX,
    ARROW,
}