﻿//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using System;

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        private sealed partial class ResourceLoader
        {
            private sealed class LoadAssetTask : LoadResourceTaskBase
            {
                private LoadAssetCallbacks m_LoadAssetCallbacks;

                public LoadAssetTask()
                {
                    m_LoadAssetCallbacks = null;
                }

                public override bool IsScene
                {
                    get
                    {
                        return false;
                    }
                }

                public static LoadAssetTask Create(string assetName, Type assetType, int priority, LoadAssetCallbacks loadAssetCallbacks, object userData)
                {
                    LoadAssetTask loadAssetTask = ReferencePool.Acquire<LoadAssetTask>();
                    loadAssetTask.Initialize(assetName, assetType, priority, userData);
                    loadAssetTask.m_LoadAssetCallbacks = loadAssetCallbacks;
                    return loadAssetTask;
                }

                public override void Clear()
                {
                    base.Clear();
                    m_LoadAssetCallbacks = null;
                }

                public override void OnLoadAssetSuccess(LoadResourceAgent agent, object asset, float duration)
                {
                    base.OnLoadAssetSuccess(agent, asset, duration);
                    if (m_LoadAssetCallbacks.LoadAssetSuccessCallback != null)
                    {
                        m_LoadAssetCallbacks.LoadAssetSuccessCallback(AssetName, asset, duration, UserData);
                    }
                }

                public override void OnLoadAssetFailure(LoadResourceAgent agent, LoadResourceStatus status, string errorMessage)
                {
                    base.OnLoadAssetFailure(agent, status, errorMessage);
                    if (m_LoadAssetCallbacks.LoadAssetFailureCallback != null)
                    {
                        m_LoadAssetCallbacks.LoadAssetFailureCallback(AssetName, status, errorMessage, UserData);
                    }
                }

                public override void OnLoadAssetUpdate(LoadResourceAgent agent, float progress)
                {
                    base.OnLoadAssetUpdate(agent, progress);
                    if (m_LoadAssetCallbacks.LoadAssetUpdateCallback != null)
                    {
                        m_LoadAssetCallbacks.LoadAssetUpdateCallback(AssetName, progress, UserData);
                    }
                }
            }
        }
    }
}
