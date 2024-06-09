using GameFramework;
using GameFramework.Resource;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace UnityGameFramework.Runtime
{
    public class DefaultResourceVersionHelper : IResourceVersionHelper
    {
        private bool m_IsCheckUpdate;
        private AsyncOperationHandle<List<string>> m_CheckHandle;

        public bool CheckUpdate()
        {
            //检查更新信息
            Log.Info("AddressableVersion CheckUpdate");
            var initHandle = Addressables.InitializeAsync();
            initHandle.WaitForCompletion();
            if (m_IsCheckUpdate)
            {
                Addressables.Release(m_CheckHandle);
                m_IsCheckUpdate = false;
            }
            Log.Info("CheckForCatalogUpdates");
            m_CheckHandle = Addressables.CheckForCatalogUpdates(false);
            m_IsCheckUpdate = true;
            m_CheckHandle.WaitForCompletion();
            Log.Info($"Check Result Count:{m_CheckHandle.Result.Count}");

            foreach (var item in m_CheckHandle.Result)
            {
                Log.Info($"Check Result :{item}");
            }

            return m_CheckHandle.Result.Count > 0;
        }

        public async void UpdateResource(UpdateResourceCallbacks updateResourceCallbacks, object userData)
        {
            try
            {
                if (m_CheckHandle.IsDone)
                {
                    string label = userData as string;
                    bool hasLabel = !string.IsNullOrEmpty(label);

                    if (m_CheckHandle.Result.Count > 0)
                    {
                        var updateHandle = Addressables.UpdateCatalogs(m_CheckHandle.Result, false);
                        updateHandle.WaitForCompletion();

                        var locators = updateHandle.Result;
                        HashSet<object> downloadKeys = new HashSet<object>();
                        long totalDownloadSize = 0;
                        foreach (var locator in locators)
                        {
                            Log.Info($"Update locator:{locator.LocatorId}");

                            var sizeHandle = Addressables.GetDownloadSizeAsync(locator.Keys);
                            sizeHandle.WaitForCompletion();
                            long downloadSize = sizeHandle.Result;
                            if (downloadSize > 0)
                            {
                                if (hasLabel)
                                {
                                    foreach (var key in locator.Keys)
                                    {
                                        if (key.ToString().Equals(label))
                                        {
                                            totalDownloadSize += downloadSize;
                                            downloadKeys.Add(key);
                                            Log.Info($"download key: {key}");
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    totalDownloadSize += downloadSize;
                                    foreach (var key in locator.Keys)
                                    {
                                        downloadKeys.Add(key);
                                        Log.Info($"locator[{locator}] size:{downloadSize} key:{key}");
                                    }
                                }
                            }
                        }

                        DateTime downloadStartTime = DateTime.UtcNow;
                        if (totalDownloadSize > 0)
                        {
                            float downloadKBSize = totalDownloadSize / 1024.0f;
                            var downloadHandle = Addressables.DownloadDependenciesAsync(downloadKeys, Addressables.MergeMode.Union);
                            while (!downloadHandle.IsDone)
                            {
                                float percentage = downloadHandle.PercentComplete;
                                float useTime = (float)(DateTime.UtcNow - downloadStartTime).TotalSeconds;
                                float downloadSpeed = (percentage * downloadKBSize) / useTime;
                                float remainingTime = (float)((downloadKBSize / downloadSpeed) / downloadSpeed - useTime);
                               
                                if (updateResourceCallbacks.UpdateResourceUpdateCallback != null)
                                {
                                    updateResourceCallbacks.UpdateResourceUpdateCallback(percentage, downloadKBSize, downloadSpeed, remainingTime, userData);
                                }

                                //allback?.Invoke(percentage, downloadKBSize, downloadSpeed, remainingTime);
                                await Task.Delay(500);
                            }
                            Addressables.Release(downloadHandle);
                        }

                        float duration = (float)(DateTime.UtcNow - downloadStartTime).TotalSeconds;
                        if (updateResourceCallbacks.UpdateResourceSuccessCallback != null)
                        {
                            updateResourceCallbacks.UpdateResourceSuccessCallback(duration, userData);
                        }

                        //downloadComplete?.Invoke();
                        Addressables.Release(updateHandle);
                    }
                    Addressables.Release(m_CheckHandle);
                    m_IsCheckUpdate = false;
                }
            }
            catch (GameFrameworkException e)
            {
                if (updateResourceCallbacks.UpdateResourceFailureCallback != null)
                {
                    updateResourceCallbacks.UpdateResourceFailureCallback(e.Message, userData);
                }
                //errorCallback?.Invoke(e.Message, e.ToString());
            }
        }
    }
}

