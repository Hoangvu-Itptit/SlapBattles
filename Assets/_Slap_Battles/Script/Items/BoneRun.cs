using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class BoneRun : MonoBehaviour
{
    [SerializeField] private Vector3 target;

    public Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        Vector3 relative = transform.InverseTransformPoint(target);
        float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
        transform.Rotate(0, angle, 0);
        var oldTranform = transform.position;
        var newTranform = target;

        transform.DOMove(target, 10).SetSpeedBased().SetLoops(-1, LoopType.Yoyo).SetEase(Ease.Linear).OnStepComplete(
            () =>
            {
                Vector3 relative = transform.InverseTransformPoint(oldTranform);
                float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
                transform.Rotate(0, angle, 0);
                (oldTranform, newTranform) = (newTranform, oldTranform);
            }).OnPlay(() => { animator.Play(CONST.BONE_RUN_ANIMATE); });
    }
}