using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Mono singleton class
/// </summary>

public abstract class MonoSingleton<T> : MonoBehaviour where T : MonoSingleton<T>
{
    private static T _inst = null;

    public static T Instance
    {
        get
        {
            return _inst;
        }
    }

    protected virtual void Awake()
    {
        _inst = (T)this;
    }
}

