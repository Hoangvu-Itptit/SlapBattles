using System.Collections.Generic;
using UnityEngine;

public class VariantBoxObjectPool : MonoBehaviour
{
    public static VariantBoxObjectPool current;

    [Tooltip("Assign the box prefab.")]
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
            IndicatorVariant box = Instantiate(pooledObject);
            box.transform.SetParent(transform, false);
            box.Activate(false);
            pooledObjects.Add(box);
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
            IndicatorVariant box = Instantiate(pooledObject);
            box.transform.SetParent(transform, false);
            box.Activate(false);
            pooledObjects.Add(box);
            return box;
        }
        return null;
    }

    /// <summary>
    /// Deactive all the objects in the pool.
    /// </summary>
    public void DeactivateAllPooledObjects()
    {
        foreach (IndicatorVariant box in pooledObjects)
        {
            box.Activate(false);
        }
    }
}

