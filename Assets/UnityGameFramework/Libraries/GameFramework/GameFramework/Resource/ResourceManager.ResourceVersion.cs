using System;

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        /// <summary>
        /// 加载资源器。
        /// </summary>
        private sealed partial class ResourceVersion
        {
            private readonly ResourceManager m_ResourceManager;
            private IResourceVersionHelper m_Helper;

            public ResourceVersion(ResourceManager resourceManager)
            {
                m_ResourceManager = resourceManager;
            }

            public void SetResourceVersionHelper(IResourceVersionHelper resourceVersionHelper)
            {
                m_Helper = resourceVersionHelper;
            }

            public bool CheckUpdate()
            {
                return m_Helper.CheckUpdate();
            }

            public void UpdateResource(UpdateResourceCallbacks updateResourceCallbacks, object userData)
            {
                m_Helper.UpdateResource(updateResourceCallbacks, userData);
            }
        }
    }
}