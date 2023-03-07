using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Unity.VisualScripting;
using UnityEngine;

public class Plane : MonoBehaviour
{
    private Vector3 target;

    public GameObject boom;

    private void OnEnable()
    {
        target = GetComponent<Trap>().target;
        var posx = Random.Range(-1f, 1f);
        var rand = Random.Range(0, 2);
        var posy = Mathf.Sqrt(1 - Mathf.Pow(posx, 2));
        if (rand == 0)
        {
            posy = -posy;
        }

        transform.position = new Vector3(10 * posx, target.y + 20, 10 * posy);
        var tar = new Vector3(target.x, target.y + 20, target.z);

        Vector3 relative = transform.InverseTransformPoint(target);
        float angle = Mathf.Atan2(relative.x, relative.z) * Mathf.Rad2Deg;
        transform.Rotate(0, angle, 0);

        transform.DOMove(tar, 30).SetSpeedBased().SetEase(Ease.Linear)
            .OnComplete(() =>
            {
                InstanBoom();
                gameObject.SetActive(false);
            });
    }

    void InstanBoom()
    {
        var lvIns = LevelCtl.Instance;
        var iBoom = lvIns.listActiveItemsTrapused.FirstOrDefault(fboom => !fboom.activeInHierarchy);
        if (iBoom == null)
        {
            iBoom = Instantiate(boom, transform.position + Vector3.down * 2, transform.rotation);
            lvIns.listActiveItemsTrapused.Add(iBoom);
        }
        else
        {
            iBoom.transform.position = transform.position;
            iBoom.transform.rotation = transform.rotation;
            iBoom.SetActive(true);
        }
    }
}