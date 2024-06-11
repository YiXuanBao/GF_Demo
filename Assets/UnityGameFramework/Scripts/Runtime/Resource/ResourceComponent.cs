//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using GameFramework;
using GameFramework.Resource;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace UnityGameFramework.Runtime
{
    /// <summary>
    /// 资源组件。
    /// </summary>
    [DisallowMultipleComponent]
    [AddComponentMenu("Game Framework/Resource")]
    public sealed class ResourceComponent : GameFrameworkComponent
    {
        #region Field
        private const int DefaultPriority = 0;

        private IResourceManager m_ResourceManager = null;
        private EventComponent m_EventComponent = null;
        private bool m_ForceUnloadUnusedAssets = false;
        private bool m_PreorderUnloadUnusedAssets = false;
        private bool m_PerformGCCollect = false;
        private AsyncOperation m_AsyncOperation = null;
        private float m_LastUnloadUnusedAssetsOperationElapseSeconds = 0f;
        private ResourceHelperBase m_ResourceHelper = null;

        [SerializeField]
        private ResourceMode m_ResourceMode = ResourceMode.Package;

        [SerializeField]
        private ReadWritePathType m_ReadWritePathType = ReadWritePathType.Unspecified;

        [SerializeField]
        private float m_MinUnloadUnusedAssetsInterval = 60f;

        [SerializeField]
        private float m_MaxUnloadUnusedAssetsInterval = 300f;

        [SerializeField]
        private float m_AssetAutoReleaseInterval = 60f;

        [SerializeField]
        private string m_UpdatePrefixUri = null;

        [SerializeField]
        private Transform m_InstanceRoot = null;

        [SerializeField]
        private string m_ResourceHelperTypeName = "UnityGameFramework.Runtime.DefaultResourceHelper";

        [SerializeField]
        private ResourceHelperBase m_CustomResourceHelper = null;

        [SerializeField]
        private string m_LoadResourceAgentHelperTypeName = "UnityGameFramework.Runtime.DefaultLoadResourceAgentHelper";

        [SerializeField]
        private LoadResourceAgentHelperBase m_CustomLoadResourceAgentHelper = null;

        [SerializeField]
        private int m_LoadResourceAgentHelperCount = 3;

        /// <summary>
        /// 获取资源只读路径。
        /// </summary>
        public string ReadOnlyPath
        {
            get
            {
                return m_ResourceManager.ReadOnlyPath;
            }
        }

        /// <summary>
        /// 获取资源读写路径。
        /// </summary>
        public string ReadWritePath
        {
            get
            {
                return m_ResourceManager.ReadWritePath;
            }
        }

        /// <summary>
        /// 获取资源模式。
        /// </summary>
        public ResourceMode ResourceMode
        {
            get
            {
                return m_ResourceManager.ResourceMode;
            }
        }

        /// <summary>
        /// 获取资源读写路径类型。
        /// </summary>
        public ReadWritePathType ReadWritePathType
        {
            get
            {
                return m_ReadWritePathType;
            }
        }

        /// <summary>
        /// 获取无用资源释放的等待时长，以秒为单位。
        /// </summary>
        public float LastUnloadUnusedAssetsOperationElapseSeconds
        {
            get
            {
                return m_LastUnloadUnusedAssetsOperationElapseSeconds;
            }
        }

        /// <summary>
        /// 获取或设置无用资源释放的最小间隔时间，以秒为单位。
        /// </summary>
        public float MinUnloadUnusedAssetsInterval
        {
            get
            {
                return m_MinUnloadUnusedAssetsInterval;
            }
            set
            {
                m_MinUnloadUnusedAssetsInterval = value;
            }
        }

        /// <summary>
        /// 获取或设置无用资源释放的最大间隔时间，以秒为单位。
        /// </summary>
        public float MaxUnloadUnusedAssetsInterval
        {
            get
            {
                return m_MaxUnloadUnusedAssetsInterval;
            }
            set
            {
                m_MaxUnloadUnusedAssetsInterval = value;
            }
        }

        /// <summary>
        /// 获取当前资源适用的游戏版本号。
        /// </summary>
        public string ApplicableGameVersion
        {
            get
            {
                return m_ResourceManager.ApplicableGameVersion;
            }
        }

        /// <summary>
        /// 获取或设置资源更新下载地址。
        /// </summary>
        public string UpdatePrefixUri
        {
            get
            {
                return m_ResourceManager.UpdatePrefixUri;
            }
            set
            {
                m_ResourceManager.UpdatePrefixUri = m_UpdatePrefixUri = value;
            }
        }

        /// <summary>
        /// 获取加载资源代理总数量。
        /// </summary>
        public int LoadTotalAgentCount
        {
            get
            {
                return m_ResourceManager.LoadTotalAgentCount;
            }
        }

        /// <summary>
        /// 获取可用加载资源代理数量。
        /// </summary>
        public int LoadFreeAgentCount
        {
            get
            {
                return m_ResourceManager.LoadFreeAgentCount;
            }
        }

        /// <summary>
        /// 获取工作中加载资源代理数量。
        /// </summary>
        public int LoadWorkingAgentCount
        {
            get
            {
                return m_ResourceManager.LoadWorkingAgentCount;
            }
        }

        /// <summary>
        /// 获取等待加载资源任务数量。
        /// </summary>
        public int LoadWaitingTaskCount
        {
            get
            {
                return m_ResourceManager.LoadWaitingTaskCount;
            }
        }
        #endregion

        /// <summary>
        /// 游戏框架组件初始化。
        /// </summary>
        protected override void Awake()
        {
            base.Awake();
        }

        private void Start()
        {
            var initHandle = Addressables.InitializeAsync();
            initHandle.WaitForCompletion();

            BaseComponent baseComponent = GameEntry.GetComponent<BaseComponent>();
            if (baseComponent == null)
            {
                Log.Fatal("Base component is invalid.");
                return;
            }

            m_EventComponent = GameEntry.GetComponent<EventComponent>();
            if (m_EventComponent == null)
            {
                Log.Fatal("Event component is invalid.");
                return;
            }

            m_ResourceManager = GameFrameworkEntry.GetModule<IResourceManager>();
            if (m_ResourceManager == null)
            {
                Log.Fatal("Resource manager is invalid.");
                return;
            }

            m_ResourceManager.SetReadOnlyPath(Application.streamingAssetsPath);
            if (m_ReadWritePathType == ReadWritePathType.TemporaryCache)
            {
                m_ResourceManager.SetReadWritePath(Application.temporaryCachePath);
            }
            else
            {
                if (m_ReadWritePathType == ReadWritePathType.Unspecified)
                {
                    m_ReadWritePathType = ReadWritePathType.PersistentData;
                }

                m_ResourceManager.SetReadWritePath(Application.persistentDataPath);
            }

            SetResourceMode(m_ResourceMode);
          
            if (m_ResourceMode == ResourceMode.Updatable || m_ResourceMode == ResourceMode.UpdatableWhilePlaying)
            {
                m_ResourceManager.UpdatePrefixUri = m_UpdatePrefixUri;
            }

            m_ResourceHelper = Helper.CreateHelper(m_ResourceHelperTypeName, m_CustomResourceHelper);
            if (m_ResourceHelper == null)
            {
                Log.Error("Can not create resource helper.");
                return;
            }

            m_ResourceHelper.name = "Resource Helper";
            Transform transform = m_ResourceHelper.transform;
            transform.SetParent(this.transform);
            transform.localScale = Vector3.one;

            m_ResourceManager.SetResourceHelper(m_ResourceHelper);

            if (m_InstanceRoot == null)
            {
                m_InstanceRoot = new GameObject("Load Resource Agent Instances").transform;
                m_InstanceRoot.SetParent(gameObject.transform);
                m_InstanceRoot.localScale = Vector3.one;
            }

            for (int i = 0; i < m_LoadResourceAgentHelperCount; i++)
            {
                AddLoadResourceAgentHelper(i);
            }

            m_ResourceManager.SetResourceVersionHelper(new DefaultResourceVersionHelper());
        }

        private void Update()
        {
            m_LastUnloadUnusedAssetsOperationElapseSeconds += Time.unscaledDeltaTime;
            if (m_AsyncOperation == null && (m_ForceUnloadUnusedAssets || m_LastUnloadUnusedAssetsOperationElapseSeconds >= m_MaxUnloadUnusedAssetsInterval || m_PreorderUnloadUnusedAssets && m_LastUnloadUnusedAssetsOperationElapseSeconds >= m_MinUnloadUnusedAssetsInterval))
            {
                Log.Info("Unload unused assets...");
                m_ForceUnloadUnusedAssets = false;
                m_PreorderUnloadUnusedAssets = false;
                m_LastUnloadUnusedAssetsOperationElapseSeconds = 0f;
                m_AsyncOperation = Resources.UnloadUnusedAssets();
            }

            if (m_AsyncOperation != null && m_AsyncOperation.isDone)
            {
                m_AsyncOperation = null;
                if (m_PerformGCCollect)
                {
                    Log.Info("GC.Collect...");
                    m_PerformGCCollect = false;
                    GC.Collect();
                }
            }
        }

        /// <summary>
        /// 设置资源模式。
        /// </summary>
        /// <param name="resourceMode">资源模式。</param>
        public void SetResourceMode(ResourceMode resourceMode)
        {
            m_ResourceManager.SetResourceMode(resourceMode);
        }

        /// <summary>
        /// 预订执行释放未被使用的资源。
        /// </summary>
        /// <param name="performGCCollect">是否使用垃圾回收。</param>
        public void UnloadUnusedAssets(bool performGCCollect)
        {
            m_PreorderUnloadUnusedAssets = true;
            if (performGCCollect)
            {
                m_PerformGCCollect = performGCCollect;
            }
        }

        /// <summary>
        /// 强制执行释放未被使用的资源。
        /// </summary>
        /// <param name="performGCCollect">是否使用垃圾回收。</param>
        public void ForceUnloadUnusedAssets(bool performGCCollect)
        {
            m_ForceUnloadUnusedAssets = true;
            if (performGCCollect)
            {
                m_PerformGCCollect = performGCCollect;
            }
        }

        /// <summary>
        /// 获取所有加载资源任务的信息。
        /// </summary>
        /// <returns>所有加载资源任务的信息。</returns>
        public TaskInfo[] GetAllLoadAssetInfos()
        {
            return m_ResourceManager.GetAllLoadAssetInfos();
        }

        /// <summary>
        /// 获取所有加载资源任务的信息。
        /// </summary>
        /// <param name="results">所有加载资源任务的信息。</param>
        public void GetAllLoadAssetInfos(List<TaskInfo> results)
        {
            m_ResourceManager.GetAllLoadAssetInfos(results);
        }

        /// <summary>
        /// 检查资源是否存在。
        /// </summary>
        /// <param name="assetName">要检查资源的名称。</param>
        /// <returns>检查资源是否存在的结果。</returns>
        public bool HasAsset(string assetName)
        {
            return m_ResourceManager.HasAsset(assetName);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        public void LoadAsset(string assetName, LoadAssetCallbacks loadAssetCallbacks)
        {
            LoadAsset(assetName, null, DefaultPriority, loadAssetCallbacks, null);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        public void LoadAsset(string assetName, Type assetType, LoadAssetCallbacks loadAssetCallbacks)
        {
            LoadAsset(assetName, assetType, DefaultPriority, loadAssetCallbacks, null);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="priority">加载资源的优先级。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        public void LoadAsset(string assetName, int priority, LoadAssetCallbacks loadAssetCallbacks)
        {
            LoadAsset(assetName, null, priority, loadAssetCallbacks, null);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public void LoadAsset(string assetName, LoadAssetCallbacks loadAssetCallbacks, object userData)
        {
            LoadAsset(assetName, null, DefaultPriority, loadAssetCallbacks, userData);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="priority">加载资源的优先级。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        public void LoadAsset(string assetName, Type assetType, int priority, LoadAssetCallbacks loadAssetCallbacks)
        {
            LoadAsset(assetName, assetType, priority, loadAssetCallbacks, null);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public void LoadAsset(string assetName, Type assetType, LoadAssetCallbacks loadAssetCallbacks, object userData)
        {
            LoadAsset(assetName, assetType, DefaultPriority, loadAssetCallbacks, userData);
        }

        /// <summary>
        /// 异步加载资源。
        /// </summary>
        /// <param name="assetName">要加载资源的名称。</param>
        /// <param name="priority">加载资源的优先级。</param>
        /// <param name="loadAssetCallbacks">加载资源回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        public void LoadAsset(string assetName, int priority, LoadAssetCallbacks loadAssetCallbacks, object userData)
        {
            LoadAsset(assetName, null, priority, loadAssetCallbacks, userData);
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
            if (string.IsNullOrEmpty(assetName))
            {
                Log.Error("Asset name is invalid.");
                return;
            }

            if (!assetName.StartsWith("Assets/", StringComparison.Ordinal))
            {
                Log.Error("Asset name '{0}' is invalid.", assetName);
                return;
            }

            m_ResourceManager.LoadAsset(assetName, assetType, priority, loadAssetCallbacks, userData);
        }

        /// <summary>
        /// 卸载资源。
        /// </summary>
        /// <param name="asset">要卸载的资源。</param>
        public void UnloadAsset(string assetName)
        {
            m_ResourceManager.UnloadAsset(assetName);
        }

        public void UnloadAsset(object asset)
        {
            m_ResourceManager.UnloadAsset(asset);
        }

        /// <summary>
        /// 增加加载资源代理辅助器。
        /// </summary>
        /// <param name="index">加载资源代理辅助器索引。</param>
        private void AddLoadResourceAgentHelper(int index)
        {
            LoadResourceAgentHelperBase loadResourceAgentHelper = Helper.CreateHelper(m_LoadResourceAgentHelperTypeName, m_CustomLoadResourceAgentHelper, index);
            if (loadResourceAgentHelper == null)
            {
                Log.Error("Can not create load resource agent helper.");
                return;
            }

            loadResourceAgentHelper.name = Utility.Text.Format("Load Resource Agent Helper - {0}", index);
            Transform transform = loadResourceAgentHelper.transform;
            transform.SetParent(m_InstanceRoot);
            transform.localScale = Vector3.one;

            m_ResourceManager.AddLoadResourceAgentHelper(loadResourceAgentHelper);
        }

        public bool CheckUpdate()
        {
            return m_ResourceManager.CheckUpdate();
        }

        public void UpdateResource(UpdateResourceCallbacks updateResourceCallbacks, object userData)
        {
            m_ResourceManager.UpdateResource(updateResourceCallbacks, userData);
        }
    }
}
