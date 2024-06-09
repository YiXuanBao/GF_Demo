//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using System;
using System.Collections.Generic;

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        /// <summary>
        /// 加载资源器。
        /// </summary>
        private sealed partial class ResourceLoader
        {
            private readonly ResourceManager m_ResourceManager;
            private IResourceHelper m_ResourceHelper;

            private readonly TaskPool<LoadResourceTaskBase> m_TaskPool;
            private readonly Dictionary<string, object> m_AssetMap;

            /// <summary>
            /// 初始化加载资源器的新实例。
            /// </summary>
            /// <param name="resourceManager">资源管理器。</param>
            public ResourceLoader(ResourceManager resourceManager)
            {
                m_ResourceManager = resourceManager;
                m_AssetMap = new Dictionary<string, object>(StringComparer.Ordinal);
                m_TaskPool = new TaskPool<LoadResourceTaskBase>();
            }

            /// <summary>
            /// 获取加载资源代理总数量。
            /// </summary>
            public int TotalAgentCount
            {
                get
                {
                    return m_TaskPool.TotalAgentCount;
                }
            }

            /// <summary>
            /// 获取可用加载资源代理数量。
            /// </summary>
            public int FreeAgentCount
            {
                get
                {
                    return m_TaskPool.FreeAgentCount;
                }
            }

            /// <summary>
            /// 获取工作中加载资源代理数量。
            /// </summary>
            public int WorkingAgentCount
            {
                get
                {
                    return m_TaskPool.WorkingAgentCount;
                }
            }

            /// <summary>
            /// 获取等待加载资源任务数量。
            /// </summary>
            public int WaitingTaskCount
            {
                get
                {
                    return m_TaskPool.WaitingTaskCount;
                }
            }

            /// <summary>
            /// 加载资源器轮询。
            /// </summary>
            /// <param name="elapseSeconds">逻辑流逝时间，以秒为单位。</param>
            /// <param name="realElapseSeconds">真实流逝时间，以秒为单位。</param>
            public void Update(float elapseSeconds, float realElapseSeconds)
            {
                m_TaskPool.Update(elapseSeconds, realElapseSeconds);
            }

            /// <summary>
            /// 关闭并清理加载资源器。
            /// </summary>
            public void Shutdown()
            {
                m_TaskPool.Shutdown();
                LoadResourceAgent.Clear();
            }

            public void SetResourceHelper(IResourceHelper resourceHelper)
            {
                m_ResourceHelper = resourceHelper;
            }

            /// <summary>
            /// 增加加载资源代理辅助器。
            /// </summary>
            /// <param name="loadResourceAgentHelper">要增加的加载资源代理辅助器。</param>
            /// <param name="resourceHelper">资源辅助器。</param>
            /// <param name="readOnlyPath">资源只读区路径。</param>
            /// <param name="readWritePath">资源读写区路径。</param>
            /// <param name="decryptResourceCallback">要设置的解密资源回调函数。</param>
            public void AddLoadResourceAgentHelper(ILoadResourceAgentHelper loadResourceAgentHelper, IResourceHelper resourceHelper)
            {
                LoadResourceAgent agent = new LoadResourceAgent(loadResourceAgentHelper, this);
                m_TaskPool.AddAgent(agent);
            }

            /// <summary>
            /// 检查资源是否存在。
            /// </summary>
            /// <param name="assetName">要检查资源的名称。</param>
            /// <returns>检查资源是否存在的结果。</returns>
            public bool HasAsset(string assetName)
            {
                if (m_AssetMap.ContainsKey(assetName))
                {
                    return true;
                }

                bool hasAsset = m_ResourceHelper.HasAsset(assetName);
                return hasAsset;
            }

            private void CacheAsset(string assetName, object asset)
            {
                if (!m_AssetMap.ContainsKey(assetName))
                {
                    m_AssetMap.Add(assetName, asset);
                }
                else
                {
                    GameFrameworkLog.Debug($"The same resource file was loaded earlier : {assetName}");
                }
            }

            private bool GetCacheAssetByKey(string assetName, out object asset)
            {
                return m_AssetMap.TryGetValue(assetName, out asset);
            }

            private string GetCacheAssetByValue(object value)
            {
                foreach (var asset in m_AssetMap)
                {
                    if (ReferenceEquals(value, asset.Value))
                    {
                        return asset.Key;
                    }
                }

                return null;
            }

            /// <summary>
            /// 异步加载资源。
            /// </summary>
            /// <param name="assetName">要加载资源的名称。</param>
            /// <param name="assetType">要加载资源的类型。</param>
            /// <param name="priority">加载资源的优先级。</param>
            /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
            /// <param name="userData">用户自定义数据。</param>
            public void LoadAsset(string assetName, Type assetType, int priority, LoadAssetCallbacks loadAssetCallbacks, object userData)
            {
                LoadAssetTask mainTask = LoadAssetTask.Create(assetName, assetType, priority, loadAssetCallbacks, userData);
                m_TaskPool.AddTask(mainTask);
            }

            /// <summary>
            /// 卸载资源。
            /// </summary>
            /// <param name="assetName">要卸载的资源路径。</param>
            public void UnloadAsset(string assetName)
            {
                object asset;
                if (GetCacheAssetByKey(assetName, out asset))
                {
                    m_ResourceHelper.UnloadAsset(asset);
                    m_AssetMap.Remove(assetName);
                }
            }

            /// <summary>
            /// 卸载资源。
            /// </summary>
            /// <param name="asset">要卸载的资源。</param>
            public void UnloadAsset(object asset)
            {
                string key = GetCacheAssetByValue(asset);
                if (!string.IsNullOrEmpty(key))
                {
                    m_ResourceHelper.UnloadAsset(asset);
                    m_AssetMap.Remove(key);
                }
                else
                {
                    GameFrameworkLog.Debug("不是Resource生成的资源");
                }
            }

            /// <summary>
            /// 异步加载场景。
            /// </summary>
            /// <param name="sceneAssetName">要加载场景资源的名称。</param>
            /// <param name="priority">加载场景资源的优先级。</param>
            /// <param name="loadSceneCallbacks">加载场景回调函数集。</param>
            /// <param name="userData">用户自定义数据。</param>
            public void LoadScene(string sceneAssetName, int priority, LoadSceneCallbacks loadSceneCallbacks, object userData)
            {
                LoadSceneTask mainTask = LoadSceneTask.Create(sceneAssetName, priority, loadSceneCallbacks, userData);
                m_TaskPool.AddTask(mainTask);
            }

            /// <summary>
            /// 异步卸载场景。
            /// </summary>
            /// <param name="sceneAssetName">要卸载场景资源的名称。</param>
            /// <param name="unloadSceneCallbacks">卸载场景回调函数集。</param>
            /// <param name="userData">用户自定义数据。</param>
            public void UnloadScene(string sceneAssetName, UnloadSceneCallbacks unloadSceneCallbacks, object userData)
            {
                if (m_ResourceHelper == null)
                {
                    throw new GameFrameworkException("You must set resource helper first.");
                }

                if (GetCacheAssetByKey(sceneAssetName, out object asset))
                {
                    m_ResourceHelper.UnloadScene(asset, unloadSceneCallbacks, userData);
                    m_AssetMap.Remove(sceneAssetName);
                }
                else
                {
                    throw new GameFrameworkException(Utility.Text.Format("Can not find asset of scene '{0}'.", sceneAssetName));
                }
            }

            /// <summary>
            /// 获取所有加载资源任务的信息。
            /// </summary>
            /// <returns>所有加载资源任务的信息。</returns>
            public TaskInfo[] GetAllLoadAssetInfos()
            {
                return m_TaskPool.GetAllTaskInfos();
            }

            /// <summary>
            /// 获取所有加载资源任务的信息。
            /// </summary>
            /// <param name="results">所有加载资源任务的信息。</param>
            public void GetAllLoadAssetInfos(List<TaskInfo> results)
            {
                m_TaskPool.GetAllTaskInfos(results);
            }
        }
    }
}
