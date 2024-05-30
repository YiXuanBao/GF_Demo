﻿//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        private sealed partial class ResourceLoader
        {
            private sealed class LoadSceneTask : LoadResourceTaskBase
            {
                private LoadSceneCallbacks m_LoadSceneCallbacks;

                public LoadSceneTask()
                {
                    m_LoadSceneCallbacks = null;
                }

                public override bool IsScene
                {
                    get
                    {
                        return true;
                    }
                }

                public static LoadSceneTask Create(string sceneAssetName, int priority, LoadSceneCallbacks loadSceneCallbacks, object userData)
                {
                    LoadSceneTask loadSceneTask = ReferencePool.Acquire<LoadSceneTask>();
                    loadSceneTask.Initialize(sceneAssetName, null, priority, userData);
                    loadSceneTask.m_LoadSceneCallbacks = loadSceneCallbacks;
                    return loadSceneTask;
                }

                public override void Clear()
                {
                    base.Clear();
                    m_LoadSceneCallbacks = null;
                }

                public override void OnLoadAssetSuccess(LoadResourceAgent agent, object asset, float duration)
                {
                    base.OnLoadAssetSuccess(agent, asset, duration);
                    if (m_LoadSceneCallbacks.LoadSceneSuccessCallback != null)
                    {
                        m_LoadSceneCallbacks.LoadSceneSuccessCallback(AssetName, duration, UserData);
                    }
                }

                public override void OnLoadAssetFailure(LoadResourceAgent agent, LoadResourceStatus status, string errorMessage)
                {
                    base.OnLoadAssetFailure(agent, status, errorMessage);
                    if (m_LoadSceneCallbacks.LoadSceneFailureCallback != null)
                    {
                        m_LoadSceneCallbacks.LoadSceneFailureCallback(AssetName, status, errorMessage, UserData);
                    }
                }

                public override void OnLoadAssetUpdate(LoadResourceAgent agent, float progress)
                {
                    base.OnLoadAssetUpdate(agent, progress);

                    if (m_LoadSceneCallbacks.LoadSceneUpdateCallback != null)
                    {
                        m_LoadSceneCallbacks.LoadSceneUpdateCallback(AssetName, progress, UserData);
                    }
                }
            }
        }
    }
}
