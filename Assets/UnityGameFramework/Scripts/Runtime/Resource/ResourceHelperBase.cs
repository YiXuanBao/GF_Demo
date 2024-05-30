//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

using GameFramework.Resource;
using UnityEngine;

namespace UnityGameFramework.Runtime
{
    /// <summary>
    /// 资源辅助器基类。
    /// </summary>
    public abstract class ResourceHelperBase : MonoBehaviour, IResourceHelper
    {
        public abstract void UnloadScene(object sceneToRelease, UnloadSceneCallbacks unloadSceneCallbacks, object userData);

        public abstract void UnloadAsset(object objectToRelease);

        public abstract bool HasAsset(string assetName);
    }
}
