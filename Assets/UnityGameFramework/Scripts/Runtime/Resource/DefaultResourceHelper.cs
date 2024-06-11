//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using GameFramework.Resource;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using UnityEngine.ResourceManagement.ResourceProviders;

namespace UnityGameFramework.Runtime
{
    /// <summary>
    /// 默认资源辅助器。
    /// </summary>
    public class DefaultResourceHelper : ResourceHelperBase
    {
        public override void UnloadScene(object sceneToRelease, UnloadSceneCallbacks unloadSceneCallbacks, object userData)
        {
            SceneInstance sceneInstance = (SceneInstance)sceneToRelease;
            StartCoroutine(UnloadSceneCo(sceneInstance, unloadSceneCallbacks, userData));
        }

        public override void UnloadAsset(object objectToRelease)
        {
            Object @object = objectToRelease as Object;
            Addressables.Release(@object);
            Log.Debug($"UnloadAsset {@object.name}");
        }

        private IEnumerator UnloadSceneCo(SceneInstance sceneInstance, UnloadSceneCallbacks unloadSceneCallbacks, object userData)
        {
            Log.Debug($"UnloadScene {sceneInstance.Scene.name}");
            AsyncOperationHandle asyncOperationHandle = Addressables.UnloadSceneAsync(sceneInstance, false);

            yield return asyncOperationHandle;

            if (asyncOperationHandle.Status == AsyncOperationStatus.Succeeded)
            {
                if (unloadSceneCallbacks.UnloadSceneSuccessCallback != null)
                {
                    unloadSceneCallbacks.UnloadSceneSuccessCallback(sceneInstance.Scene.name, userData);
                }
            }
            else
            {
                if (unloadSceneCallbacks.UnloadSceneFailureCallback != null)
                {
                    unloadSceneCallbacks.UnloadSceneFailureCallback(sceneInstance.Scene.name, userData);
                }
            }

            Addressables.Release(asyncOperationHandle);
        }

        public override bool HasAsset(string assetName)
        {
            AsyncOperationHandle<IList<IResourceLocation>> asyncOperationHandle = Addressables.LoadResourceLocationsAsync(assetName);

            asyncOperationHandle.WaitForCompletion();

            bool result = asyncOperationHandle.Result.Count > 0;

            Addressables.Release(asyncOperationHandle);

            return result;
        }
    }
}
