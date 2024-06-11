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
        public bool CheckUpdate()
        {
            //检查更新信息
            Log.Info("AddressableVersion CheckUpdate");

            var checkHandle = Addressables.CheckForCatalogUpdates(false);
            checkHandle.WaitForCompletion();

            var updateList = checkHandle.Result;
            Addressables.Release(checkHandle);

            Log.Info($"Check Result Count:{updateList.Count}");

            foreach (var item in updateList)
            {
                Log.Info($"Check Result :{item}");
            }

            bool result = updateList.Count > 0;

            return result;
        }

        public async void UpdateResource(UpdateResourceCallbacks updateResourceCallbacks, object userData)
        {
            try
            {
                var checkHandle = Addressables.CheckForCatalogUpdates(false);
                checkHandle.WaitForCompletion();

                var updateList = checkHandle.Result;
                Addressables.Release(checkHandle);

                string label = userData as string;
                bool hasLabel = !string.IsNullOrEmpty(label);

                if (updateList.Count > 0)
                {
                    var updateHandle = Addressables.UpdateCatalogs(updateList, false);
                    updateHandle.WaitForCompletion();

                    var locators = updateHandle.Result;
                    Addressables.Release(updateHandle);

                    HashSet<object> downloadKeys = new HashSet<object>();
                    long totalDownloadSize = 0;
                    foreach (var locator in locators)
                    {
                        Log.Info($"Update locator:{locator.LocatorId}");

                        var sizeHandle = Addressables.GetDownloadSizeAsync(locator.Keys);
                        sizeHandle.WaitForCompletion();

                        long downloadSize = sizeHandle.Result;
                        Addressables.Release(sizeHandle);

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
                            await Task.Delay(100);
                        }
                        Addressables.Release(downloadHandle);
                    }

                    float duration = (float)(DateTime.UtcNow - downloadStartTime).TotalSeconds;
                    if (updateResourceCallbacks.UpdateResourceSuccessCallback != null)
                    {
                        updateResourceCallbacks.UpdateResourceSuccessCallback(duration, userData);
                    }
                }
            }
            catch (GameFrameworkException e)
            {
                if (updateResourceCallbacks.UpdateResourceFailureCallback != null)
                {
                    updateResourceCallbacks.UpdateResourceFailureCallback(e.Message, userData);
                }
            }
        }
    }
}

