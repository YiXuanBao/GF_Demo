using System;

namespace GameFramework.Resource
{
    internal sealed partial class ResourceManager : GameFrameworkModule, IResourceManager
    {
        private sealed partial class ResourceLoader
        {
            private abstract class LoadResourceTaskBase : TaskBase
            {
                private static int s_Serial = 0;

                private string m_AssetName;
                private Type m_AssetType;
                private DateTime m_StartTime;

                public LoadResourceTaskBase()
                {
                    m_AssetName = null;
                    m_AssetType = null;
                    m_StartTime = default(DateTime);
                }

                public string AssetName
                {
                    get
                    {
                        return m_AssetName;
                    }
                }

                public Type AssetType
                {
                    get
                    {
                        return m_AssetType;
                    }
                }

                public abstract bool IsScene
                {
                    get;
                }

                public DateTime StartTime
                {
                    get
                    {
                        return m_StartTime;
                    }
                    set
                    {
                        m_StartTime = value;
                    }
                }



                public override void Clear()
                {
                    base.Clear();
                    m_AssetName = null;
                    m_AssetType = null;
                    m_StartTime = default(DateTime);
                }

                public virtual void OnLoadAssetSuccess(LoadResourceAgent agent, object asset, float duration)
                {
                }

                public virtual void OnLoadAssetFailure(LoadResourceAgent agent, LoadResourceStatus status, string errorMessage)
                {
                }

                public virtual void OnLoadAssetUpdate(LoadResourceAgent agent, float progress)
                {
                }

                protected void Initialize(string assetName, Type assetType, int priority, object userData)
                {
                    Initialize(++s_Serial, null, priority, userData);
                    m_AssetName = assetName;
                    m_AssetType = assetType;
                }
            }
        }
    }
}