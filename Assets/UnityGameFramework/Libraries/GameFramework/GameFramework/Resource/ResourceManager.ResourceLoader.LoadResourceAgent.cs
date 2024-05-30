using GameFramework.ObjectPool;
using System;
using System.Collections.Generic;

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        private sealed partial class ResourceLoader
        {
            private sealed partial class LoadResourceAgent : ITaskAgent<LoadResourceTaskBase>
            {
                private static readonly HashSet<string> s_LoadingAssetNames = new HashSet<string>(StringComparer.Ordinal);

                private readonly ILoadResourceAgentHelper m_Helper;
                private readonly ResourceLoader m_ResourceLoader;

                private LoadResourceTaskBase m_Task;

                /// <summary>
                /// 初始化加载资源代理的新实例。
                /// </summary>
                /// <param name="loadResourceAgentHelper">加载资源代理辅助器。</param>
                /// <param name="resourceHelper">资源辅助器。</param>
                /// <param name="resourceLoader">加载资源器。</param>
                public LoadResourceAgent(ILoadResourceAgentHelper loadResourceAgentHelper, ResourceLoader resourceLoader)
                {
                    if (loadResourceAgentHelper == null)
                    {
                        throw new GameFrameworkException("Load resource agent helper is invalid.");
                    }

                    if (resourceLoader == null)
                    {
                        throw new GameFrameworkException("Resource loader is invalid.");
                    }

                    m_Helper = loadResourceAgentHelper;
                    m_ResourceLoader = resourceLoader;

                    m_Task = null;
                }

                public ILoadResourceAgentHelper Helper
                {
                    get
                    {
                        return m_Helper;
                    }
                }

                /// <summary>
                /// 获取加载资源任务。
                /// </summary>
                public LoadResourceTaskBase Task
                {
                    get
                    {
                        return m_Task;
                    }
                }

                /// <summary>
                /// 初始化加载资源代理。
                /// </summary>
                public void Initialize()
                {
                    m_Helper.LoadResourceAgentHelperUpdate += OnLoadResourceAgentHelperUpdate;
                    m_Helper.LoadResourceAgentHelperLoadComplete += OnLoadResourceAgentHelperLoadComplete;
                    m_Helper.LoadResourceAgentHelperError += OnLoadResourceAgentHelperError;
                }

                /// <summary>
                /// 加载资源代理轮询。
                /// </summary>
                /// <param name="elapseSeconds">逻辑流逝时间，以秒为单位。</param>
                /// <param name="realElapseSeconds">真实流逝时间，以秒为单位。</param>
                public void Update(float elapseSeconds, float realElapseSeconds)
                {
                }

                /// <summary>
                /// 关闭并清理加载资源代理。
                /// </summary>
                public void Shutdown()
                {
                    Reset();
                    m_Helper.LoadResourceAgentHelperUpdate -= OnLoadResourceAgentHelperUpdate;
                    m_Helper.LoadResourceAgentHelperLoadComplete -= OnLoadResourceAgentHelperLoadComplete;
                    m_Helper.LoadResourceAgentHelperError -= OnLoadResourceAgentHelperError;
                }

                public static void Clear()
                {
                    s_LoadingAssetNames.Clear();
                }

                /// <summary>
                /// 开始处理加载资源任务。
                /// </summary>
                /// <param name="task">要处理的加载资源任务。</param>
                /// <returns>开始处理任务的状态。</returns>
                public StartTaskStatus Start(LoadResourceTaskBase task)
                {
                    if (task == null)
                    {
                        throw new GameFrameworkException("Task is invalid.");
                    }

                    m_Task = task;
                    m_Task.StartTime = DateTime.UtcNow;

                    if (IsAssetLoading(m_Task.AssetName))
                    {
                        m_Task.StartTime = default(DateTime);
                        return StartTaskStatus.HasToWait;
                    }

                    GameFrameworkLog.Debug(Utility.Text.Format("{0}开始加载", m_Task.AssetName));

                    if (!m_Task.IsScene)
                    {
                        object asset = null;
                        if (m_ResourceLoader.GetCacheAssetByKey(m_Task.AssetName, out asset))
                        {
                            OnAssetObjectReady(asset);
                            return StartTaskStatus.Done;
                        }
                    }

                    m_Helper.LoadAsset(m_Task.AssetName, m_Task.IsScene);

                    s_LoadingAssetNames.Add(m_Task.AssetName);

                    return StartTaskStatus.CanResume;
                }

                /// <summary>
                /// 重置加载资源代理。
                /// </summary>
                public void Reset()
                {
                    m_Helper.Reset();
                    m_Task = null;
                }

                private static bool IsAssetLoading(string assetName)
                {
                    return s_LoadingAssetNames.Contains(assetName);
                }

                private void OnAssetObjectReady(object asset)
                {
                    GameFrameworkLog.Debug(Utility.Text.Format("{0}加载完成，耗时{1}", m_Task.AssetName, (float)(DateTime.UtcNow - m_Task.StartTime).TotalSeconds));
                    m_Helper.Reset();
                    m_Task.OnLoadAssetSuccess(this, asset, (float)(DateTime.UtcNow - m_Task.StartTime).TotalSeconds);
                    m_Task.Done = true;
                }

                private void OnError(LoadResourceStatus status, string errorMessage)
                {
                    m_Helper.Reset();
                    m_Task.OnLoadAssetFailure(this, status, errorMessage);
                    s_LoadingAssetNames.Remove(m_Task.AssetName);
                    m_Task.Done = true;
                }

                private void OnLoadResourceAgentHelperUpdate(object sender, LoadResourceAgentHelperUpdateEventArgs e)
                {
                    m_Task.OnLoadAssetUpdate(this, e.Progress);
                }

                private void OnLoadResourceAgentHelperLoadComplete(object sender, LoadResourceAgentHelperLoadCompleteEventArgs e)
                {
                    m_ResourceLoader.CacheAsset(m_Task.AssetName, e.Asset);
                    s_LoadingAssetNames.Remove(m_Task.AssetName);
                    OnAssetObjectReady(e.Asset);
                }

                private void OnLoadResourceAgentHelperError(object sender, LoadResourceAgentHelperErrorEventArgs e)
                {
                    OnError(e.Status, e.ErrorMessage);
                }
            }
        }
    }
}