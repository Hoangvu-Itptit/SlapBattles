using System.Collections.Generic;
using UnityEngine;

class VariantArrowObjectPool : MonoBehaviour
{
    public static VariantArrowObjectPool current;

    [Tooltip("Assign the arrow prefab.")]
    public IndicatorVariant pooledObject;
    [Tooltip("Initial pooled amount.")]
    public int pooledAmount = 1;
    [Tooltip("Should the pooled amount increase.")]
    public bool willGrow = true;

    List<IndicatorVariant> pooledObjects;

    void Awake()
    {
        current = this;
    }

    void Start()
    {
        pooledObjects = new List<IndicatorVariant>();

        for (int i = 0; i < pooledAmount; i++)
        {
            IndicatorVariant arrow = Instantiate(pooledObject);
            arrow.transform.SetParent(transform, false);
            arrow.Activate(false);
            pooledObjects.Add(arrow);
        }
    }

    /// <summary>
    /// Gets pooled objects from the pool.
    /// </summary>
    /// <returns></returns>
    public IndicatorVariant GetPooledObject()
    {
        for (int i = 0; i < pooledObjects.Count; i++)
        {
            if (!pooledObjects[i].Active)
            {
                return pooledObjects[i];
            }
        }
        if (willGrow)
        {
            IndicatorVariant arrow = Instantiate(pooledObject);
            arrow.transform.SetParent(transform, false);
            arrow.Activate(false);
            pooledObjects.Add(arrow);
            return arrow;
        }
        return null;
    }

    /// <summary>
    /// Deactive all the objects in the pool.
    /// </summary>
    public void DeactivateAllPooledObjects()
    {
        foreach (IndicatorVariant arrow in pooledObjects)
        {
            arrow.Activate(false);
        }
    }
}

