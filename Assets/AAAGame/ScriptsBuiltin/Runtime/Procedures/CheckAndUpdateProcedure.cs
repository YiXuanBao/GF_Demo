using GameFramework.Fsm;
using GameFramework.Procedure;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class CheckAndUpdateProcedure : ProcedureBase
{

    private bool initComplete;

    protected override void OnEnter(IFsm<IProcedureManager> procedureOwner)
    {
        base.OnEnter(procedureOwner);
        initComplete = false;
        var handle = Addressables.GetDownloadSizeAsync("all");
        handle.Completed += (aoh) =>
        {
            if (aoh.Status == AsyncOperationStatus.Succeeded)
            {
                long size = aoh.Result;
                if (size <= 0)
                {
                    Debug.Log("dont need update");
                    initComplete = true;
                }
                else
                {
                    Debug.Log("need update, size: " + size);
                    DownloadAssets();
                }
            }
        };
    }

    protected override void OnUpdate(IFsm<IProcedureManager> procedureOwner, float elapseSeconds, float realElapseSeconds)
    {
        base.OnUpdate(procedureOwner, elapseSeconds, realElapseSeconds);
        if (initComplete)
        {
            ChangeState<LoadHotfixDllProcedure>(procedureOwner);
        }
    }

    private void DownloadAssets()
    {
        var handle = Addressables.DownloadDependenciesAsync("all");
        
        handle.Completed += (aoh) =>
        {
            if (aoh.Status == AsyncOperationStatus.Succeeded)
            {
                Debug.Log("下载完成");
                Debug.Log("共下载 " + handle.GetDownloadStatus().TotalBytes);
                Addressables.Release(aoh);
                initComplete = true;
            }
        };
    }
}
