using GameFramework.Fsm;
using GameFramework.Procedure;
using GameFramework.Resource;
using System;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityGameFramework.Runtime;

public class CheckAndUpdateProcedure : ProcedureBase
{

    private bool initComplete;

    protected override void OnEnter(IFsm<IProcedureManager> procedureOwner)
    {
        base.OnEnter(procedureOwner);

        var resourceCom = GFBuiltin.Resource;

        bool needUpdate = resourceCom.CheckUpdate();

        if (needUpdate)
        {
            initComplete = false;
            resourceCom.UpdateResource(new UpdateResourceCallbacks(OnDownloadSuccess, OnDownloadFailure, OnDownloadUpdate), null);
        }
        else
        {
            initComplete = true;
        }
    }

    private void OnDownloadUpdate(float progress, float downloadKBSize, float downloadSpeed, float remainingTime, object userData)
    {
        Log.Info("progress={0},downloadKBSize={1},downloadSpeed={2},remainingTime={3}", progress, downloadKBSize, downloadSpeed, remainingTime);
    }

    private void OnDownloadFailure(string errorMessage, object userData)
    {
        Log.Error("OnDownloadFailure, error {0}", errorMessage);
        initComplete = true;
    }

    private void OnDownloadSuccess(float duration, object userData)
    {
        Log.Info("OnDownloadSuccess, duration = {0}", duration);
        initComplete = true;
    }

    protected override void OnUpdate(IFsm<IProcedureManager> procedureOwner, float elapseSeconds, float realElapseSeconds)
    {
        base.OnUpdate(procedureOwner, elapseSeconds, realElapseSeconds);
        if (initComplete)
        {
            ChangeState<LoadHotfixDllProcedure>(procedureOwner);
        }
    }
}
