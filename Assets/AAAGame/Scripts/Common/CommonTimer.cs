using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public sealed class CommonTimer : UnityGameFramework.Runtime.GameFrameworkComponent
{
    private double scaledTimer = 0f;
    private double fixedTimer = 0f;
    private Dictionary<string, (double, bool)> timerDict = new Dictionary<string, (double, bool)>();

    private Dictionary<string, Coroutine> crDict = new Dictionary<string, Coroutine>();

    protected override void Awake()
    {
        base.Awake();
    }
    private void Start()
    {

    }

    private void FixedTick()
    {
        fixedTimer += Time.fixedDeltaTime;
    }

    private void Tick()
    {
        scaledTimer += Time.deltaTime;
    }
    /// <summary>
    /// Create a new timer
    /// </summary>
    /// <param name="name">Name of the timer</param>
    /// <param name="startTime">Initial time of the timer</param>
    /// <param name="isScaled">True if the timer is affected by Time.timescale</param>
    public void CreateTimer(string name, float startTime = 0, bool isScaled = true)
    {
        if (isScaled)
            timerDict.InsertOrUpdate(name, (scaledTimer - startTime, isScaled));
        else
            timerDict.InsertOrUpdate(name, (fixedTimer - startTime, isScaled));
    }
    public void DisposeTimer(string name)
    {
        timerDict.RemoveKey(name);
    }
    public double GetTimerValue(string name)
    {
        (double, bool) info = timerDict.GetValue(name);
        return info.Item2 ? scaledTimer - info.Item1 : fixedTimer - info.Item1;
    }
    public double GetTimerValue(string name, out (double, bool) timerInfo)
    {
        (double, bool) info = timerDict.GetValue(name);
        timerInfo = info;
        return info.Item2 ? scaledTimer - info.Item1 : fixedTimer - info.Item1;
    }

    /// <summary>
    /// Invoke an action after time seconds, then repeatedly every repeatInterval seconds, stopping at repeatCount times.
    /// </summary>
    /// <param name="seconds"></param>
    /// <param name="callback"></param>
    /// <param name="repeatCount"></param>
    /// <param name="repeatInterval"></param>
    public void InvokeAction(float seconds, Action callback, int repeatCount = 0, float repeatInterval = 1, string id = "", Action onFinish = null)
    {
        Coroutine cr = StartCoroutine(SimpleActionCoroutine(seconds, callback, repeatCount, repeatInterval, false, onFinish));
        if (id.Length > 0)
        {
            crDict.InsertOrUpdate(id, cr);
        }
    }
    public void CancelInvokeAction(string id)
    {
        //if (!Instance) return;

        if (crDict.ContainsKey(id))
        {
            StopCoroutine(crDict[id]);
            crDict.Remove(id);
        }
    }
    private IEnumerator SimpleActionCoroutine(float seconds, Action callback, int repeatCount = 0, float repeatInterval = 1, bool unlimited = false, Action onFinish = null)
    {
        yield return new WaitForSecondsRealtime(seconds);
        callback.Invoke();
        for (int i = 0; i < repeatCount; i++)
        {
            if (unlimited)
                i = 0;
            yield return new WaitForSecondsRealtime(repeatInterval);
            callback.Invoke();
        }
        if (onFinish != null)
            onFinish.Invoke();
    }

    public void InvokeActionUnlimited(float seconds, Action callback, float repeatInterval = 1, string id = "")
    {
        Coroutine cr = StartCoroutine(SimpleActionCoroutine(seconds, callback, 10, repeatInterval, true));
        if (id.Length > 0)
        {
            crDict.InsertOrUpdate(id, cr);
        }
    }
}
