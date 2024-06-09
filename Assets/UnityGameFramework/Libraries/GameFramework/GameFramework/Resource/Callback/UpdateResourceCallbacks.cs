//------------------------------------------------------------
// Game Framework
// Copyright © 2013-2021 Jiang Yin. All rights reserved.
// Homepage: https://gameframework.cn/
// Feedback: mailto:ellan@gameframework.cn
//------------------------------------------------------------

namespace GameFramework.Resource
{
    /// <summary>
    /// 加载资源回调函数集。
    /// </summary>
    public sealed class UpdateResourceCallbacks
    {
        private readonly UpdateResourceSuccessCallback m_UpdateResourceSuccessCallback;
        private readonly UpdateResourceFailureCallback m_UpdateResourceFailureCallback;
        private readonly UpdateResourceUpdateCallback m_UpdateResourceUpdateCallback;

        public UpdateResourceCallbacks(UpdateResourceSuccessCallback updateResourceSuccessCallback, UpdateResourceFailureCallback updateResourceFailureCallback, UpdateResourceUpdateCallback updateResourceUpdateCallback)
        {
            if (updateResourceSuccessCallback == null)
            {
                throw new GameFrameworkException("update resource success callback is invalid.");
            }

            m_UpdateResourceSuccessCallback = updateResourceSuccessCallback;
            m_UpdateResourceFailureCallback = updateResourceFailureCallback;
            m_UpdateResourceUpdateCallback = updateResourceUpdateCallback;
        }

        /// <summary>
        /// 获取加载资源成功回调函数。
        /// </summary>
        public UpdateResourceSuccessCallback UpdateResourceSuccessCallback
        {
            get
            {
                return m_UpdateResourceSuccessCallback;
            }
        }

        /// <summary>
        /// 获取加载资源失败回调函数。
        /// </summary>
        public UpdateResourceFailureCallback UpdateResourceFailureCallback
        {
            get
            {
                return m_UpdateResourceFailureCallback;
            }
        }

        /// <summary>
        /// 获取加载资源更新回调函数。
        /// </summary>
        public UpdateResourceUpdateCallback UpdateResourceUpdateCallback
        {
            get
            {
                return m_UpdateResourceUpdateCallback;
            }
        }
    }
}
