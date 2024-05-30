//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

namespace GameFramework.Resource
{
    /// <summary>
    /// 资源辅助器接口。
    /// </summary>
    public interface IResourceHelper
    {
        /// <summary>
        /// 卸载场景。
        /// </summary>
        /// <param name="sceneToRelease">场景资源。</param>
        /// <param name="unloadSceneCallbacks">卸载场景回调函数集。</param>
        /// <param name="userData">用户自定义数据。</param>
        void UnloadScene(object sceneToRelease, UnloadSceneCallbacks unloadSceneCallbacks, object userData);

        /// <summary>
        /// 释放资源。
        /// </summary>
        /// <param name="objectToRelease">要释放的资源。</param>
        void UnloadAsset(object objectToRelease);

        /// <summary>
        /// 是否存在资源
        /// </summary>
        /// <param name="assetName"></param>
        /// <returns></returns>
        bool HasAsset(string assetName);
    }
}
