﻿//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using System;

namespace GameFramework.Resource
{
    /// <summary>
    /// 加载资源代理辅助器接口。
    /// </summary>
    public interface ILoadResourceAgentHelper
    {
        /// <summary>
        /// 加载资源代理辅助器异步加载资源更新事件。
        /// </summary>
        event EventHandler<LoadResourceAgentHelperUpdateEventArgs> LoadResourceAgentHelperUpdate;

        /// <summary>
        /// 加载资源代理辅助器异步加载资源完成事件。
        /// </summary>
        event EventHandler<LoadResourceAgentHelperLoadCompleteEventArgs> LoadResourceAgentHelperLoadComplete;

        /// <summary>
        /// 加载资源代理辅助器错误事件。
        /// </summary>
        event EventHandler<LoadResourceAgentHelperErrorEventArgs> LoadResourceAgentHelperError;

        /// <summary>
        /// 通过加载资源代理辅助器开始异步加载资源。
        /// </summary>
        /// <param name="resource">资源。</param>
        /// <param name="assetName">要加载的资源名称。</param>
        /// <param name="assetType">要加载资源的类型。</param>
        /// <param name="isScene">要加载的资源是否是场景。</param>
        void LoadAsset(string assetName, bool isScene);

        /// <summary>
        /// 重置加载资源代理辅助器。
        /// </summary>
        void Reset();
    }
}
