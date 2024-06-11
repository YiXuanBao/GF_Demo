//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using GameFramework;
using GameFramework.Resource;
using System;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;
using Utility = GameFramework.Utility;

namespace UnityGameFramework.Runtime
{
    /// <summary>
    /// 默认加载资源代理辅助器。
    /// </summary>
    public class DefaultLoadResourceAgentHelper : LoadResourceAgentHelperBase, IDisposable
    {
        private string m_AssetName = null;
        private float m_LastProgress = 0f;
        private bool m_Disposed = false;
        private AsyncOperationHandle? m_AsyncOperationHandle;

        private EventHandler<LoadResourceAgentHelperUpdateEventArgs> m_LoadResourceAgentHelperUpdateEventHandler = null;
        private EventHandler<LoadResourceAgentHelperLoadCompleteEventArgs> m_LoadResourceAgentHelperLoadCompleteEventHandler = null;
        private EventHandler<LoadResourceAgentHelperErrorEventArgs> m_LoadResourceAgentHelperErrorEventHandler = null;

        /// <summary>
        /// 加载资源代理辅助器异步加载资源更新事件。
        /// </summary>
        public override event EventHandler<LoadResourceAgentHelperUpdateEventArgs> LoadResourceAgentHelperUpdate
        {
            add
            {
                m_LoadResourceAgentHelperUpdateEventHandler += value;
            }
            remove
            {
                m_LoadResourceAgentHelperUpdateEventHandler -= value;
            }
        }

        /// <summary>
        /// 加载资源代理辅助器异步加载资源完成事件。
        /// </summary>
        public override event EventHandler<LoadResourceAgentHelperLoadCompleteEventArgs> LoadResourceAgentHelperLoadComplete
        {
            add
            {
                m_LoadResourceAgentHelperLoadCompleteEventHandler += value;
            }
            remove
            {
                m_LoadResourceAgentHelperLoadCompleteEventHandler -= value;
            }
        }

        /// <summary>
        /// 加载资源代理辅助器错误事件。
        /// </summary>
        public override event EventHandler<LoadResourceAgentHelperErrorEventArgs> LoadResourceAgentHelperError
        {
            add
            {
                m_LoadResourceAgentHelperErrorEventHandler += value;
            }
            remove
            {
                m_LoadResourceAgentHelperErrorEventHandler -= value;
            }
        }

        /// <summary>
        /// 通过加载资源代理辅助器开始异步加载资源。
        /// </summary>
        /// <param name="resource">资源。</param>
        /// <param name="assetName">要加载的资源名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="isScene">要加载的资源是否是场景。</param>
        public override void LoadAsset(string assetName, bool isScene)
        {
            if (m_LoadResourceAgentHelperLoadCompleteEventHandler == null || m_LoadResourceAgentHelperUpdateEventHandler == null || m_LoadResourceAgentHelperErrorEventHandler == null)
            {
                Log.Fatal("Load resource agent helper handler is invalid.");
                return;
            }

            if (isScene)
            {
                m_AsyncOperationHandle = Addressables.LoadSceneAsync(assetName, LoadSceneMode.Additive);
            }
            else
            {
                m_AsyncOperationHandle = Addressables.LoadAssetAsync<UnityEngine.Object>(assetName);
            }
        }

        /// <summary>
        /// 重置加载资源代理辅助器。
        /// </summary>
        public override void Reset()
        {
            m_AssetName = null;
            m_LastProgress = 0f;
            m_AsyncOperationHandle = null;
        }

        /// <summary>
        /// 释放资源。
        /// </summary>
        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        /// <summary>
        /// 释放资源。
        /// </summary>
        /// <param name="disposing">释放资源标记。</param>
        protected virtual void Dispose(bool disposing)
        {
            if (m_Disposed)
            {
                return;
            }

            m_Disposed = true;
        }

        private void Update()
        {
            UpdateAsyncOperation();
        }


        private void UpdateAsyncOperation()
        {
            if (m_AsyncOperationHandle != null)
            {
                if (m_AsyncOperationHandle.Value.IsDone)
                {
                    if (m_AsyncOperationHandle.Value.Status == AsyncOperationStatus.Succeeded)
                    {
                        LoadResourceAgentHelperLoadCompleteEventArgs loadResourceAgentHelperLoadCompleteEventArgs = LoadResourceAgentHelperLoadCompleteEventArgs.Create(m_AsyncOperationHandle.Value.Result);
                        m_LoadResourceAgentHelperLoadCompleteEventHandler(this, loadResourceAgentHelperLoadCompleteEventArgs);
                        ReferencePool.Release(loadResourceAgentHelperLoadCompleteEventArgs);
                    }
                    else
                    {
                        LoadResourceAgentHelperErrorEventArgs loadResourceAgentHelperErrorEventArgs = LoadResourceAgentHelperErrorEventArgs.Create(LoadResourceStatus.AssetError, Utility.Text.Format("Can not load scene asset '{0}' from asset bundle.", m_AssetName));
                        m_LoadResourceAgentHelperErrorEventHandler(this, loadResourceAgentHelperErrorEventArgs);
                        ReferencePool.Release(loadResourceAgentHelperErrorEventArgs);
                    }
                    m_AssetName = null;
                    m_LastProgress = 0f;
                    m_AsyncOperationHandle = null;
                }
                else if (m_AsyncOperationHandle.Value.PercentComplete != m_LastProgress)
                {
                    m_LastProgress = m_AsyncOperationHandle.Value.PercentComplete;
                    LoadResourceAgentHelperUpdateEventArgs loadResourceAgentHelperUpdateEventArgs = LoadResourceAgentHelperUpdateEventArgs.Create(m_LastProgress);
                    m_LoadResourceAgentHelperUpdateEventHandler(this, loadResourceAgentHelperUpdateEventArgs);
                    ReferencePool.Release(loadResourceAgentHelperUpdateEventArgs);
                }
            }
        }
    }
}
