using GameFramework;
using GameFramework.Event;
using GameFramework.Fsm;
using GameFramework.Procedure;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityGameFramework.Runtime;

public class LoadHotfixDllProcedure : ProcedureBase
{
    /// <summary>
    /// 全部的预加载热更脚本dll
    /// </summary>
    private string[] hotfixDlls;
    private bool hotfixListIsLoaded;
    private int totalProgress;
    private int loadedProgress;

    protected override void OnEnter(IFsm<IProcedureManager> procedureOwner)
    {
        base.OnEnter(procedureOwner);

        GFBuiltin.Event.Subscribe(LoadHotfixDllEventArgs.EventId, OnLoadHotfixDllCallback);

        PreloadAndInitData();
    }

    protected override void OnUpdate(IFsm<IProcedureManager> procedureOwner, float elapseSeconds, float realElapseSeconds)
    {
        base.OnUpdate(procedureOwner, elapseSeconds, realElapseSeconds);
        if (!hotfixListIsLoaded)
        {
            return;
        }
        //加载热更新Dll完成,进入热更逻辑
        if (loadedProgress >= totalProgress)
        {
            loadedProgress = -1;
            var entryFunc = Utility.Assembly.GetType("HotfixEntry")?.GetMethod("StartHotfixLogic", System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Static);
            if (entryFunc == null)
            {
                Log.Fatal("游戏启动失败, 未找到HotfixEntry.StartHotfixLogic入口函数");
                return;
            }
            GFBuiltin.LogInfo("游戏启动");

            entryFunc?.Invoke(null, new object[] { true });
        }
    }

    protected override void OnLeave(IFsm<IProcedureManager> procedureOwner, bool isShutdown)
    {
        GFBuiltin.Event.Unsubscribe(LoadHotfixDllEventArgs.EventId, OnLoadHotfixDllCallback);
        base.OnLeave(procedureOwner, isShutdown);
    }

    /// <summary>
    /// 加载热更新dll
    /// </summary>
    private void PreloadAndInitData()
    {
        //显示进度条
        GFBuiltin.BuiltinView.ShowLoadingProgress();
        totalProgress = 0;
        loadedProgress = 0;
        hotfixListIsLoaded = true;

#if !UNITY_EDITOR
        hotfixListIsLoaded = false;
        LoadAotDlls();
        LoadHotfixDlls();
#endif
    }

    /// <summary>
    /// 补充元数据
    /// </summary>
    private void LoadAotDlls()
    {
        var aotMetaDlls = Resources.LoadAll<TextAsset>(ConstBuiltin.AOT_DLL_DIR);
        totalProgress += aotMetaDlls.Length;
        LoadMetadata(aotMetaDlls);
    }

    private void LoadMetadata(TextAsset[] aotMetaDlls)
    {
        foreach (var dll in aotMetaDlls)
        {
            var success = GFBuiltin.Hotfix.LoadMetadataForAOTAssembly(dll.bytes);
            GFBuiltin.LogInfo(Utility.Text.Format("补充元数据:{0}. ret:{1}", dll.name, success));
            if (success)
            {
                loadedProgress++;
            }
        }
    }
    private void LoadHotfixDlls()
    {
        GFBuiltin.LogInfo("开始加载热更新dll");
        var hotfixListFile = UtilityBuiltin.ResPath.GetCombinePath("Assets", ConstBuiltin.HOT_FIX_DLL_DIR, "HotfixFileList.txt");
        if (!GFBuiltin.Resource.HasAsset(hotfixListFile))
        {
            Log.Fatal("热更新dll列表文件不存在:{0}", hotfixListFile);
            return;
        }
        GFBuiltin.Resource.LoadAsset(hotfixListFile, new GameFramework.Resource.LoadAssetCallbacks((string assetName, object asset, float duration, object userData) =>
        {
            var textAsset = asset as TextAsset;
            if (textAsset != null)
            {
                hotfixDlls = UtilityBuiltin.Json.ToObject<string[]>(textAsset.text);
                totalProgress += hotfixDlls.Length;
                for (int i = 0; i < hotfixDlls.Length - 1; i++)
                {
                    var dllName = hotfixDlls[i];
                    var dllAsset = UtilityBuiltin.ResPath.GetHotfixDll(dllName);

                    GFBuiltin.Hotfix.LoadHotfixDll(dllAsset, this);
                }
                hotfixListIsLoaded = true;
            }
        }));
    }

    private void OnLoadHotfixDllCallback(object sender, GameEventArgs e)
    {
        var args = e as LoadHotfixDllEventArgs;
        if (args.UserData != this)
        {
            return;
        }
        if (args.Assembly == null)
        {
            GFBuiltin.LogError($"加载dll失败:{args.DllName}");
            return;
        }

        loadedProgress++;
        GFBuiltin.BuiltinView.SetLoadingProgress(loadedProgress / totalProgress);
        GFBuiltin.LogInfo((loadedProgress / totalProgress).ToString());
        //所有依赖dll加载完成后再加载Hotfix.dll
        if (loadedProgress + 1 == totalProgress)
        {
            var mainDll = UtilityBuiltin.ResPath.GetHotfixDll(hotfixDlls.Last());
            GFBuiltin.Hotfix.LoadHotfixDll(mainDll, this);
        }
    }
}

