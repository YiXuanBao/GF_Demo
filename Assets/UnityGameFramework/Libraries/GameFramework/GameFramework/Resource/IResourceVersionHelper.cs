using System;

namespace GameFramework.Resource
{
    public interface IResourceVersionHelper
    {
        bool CheckUpdate();

        void UpdateResource(UpdateResourceCallbacks updateResourceCallbacks, object param);
    }
}