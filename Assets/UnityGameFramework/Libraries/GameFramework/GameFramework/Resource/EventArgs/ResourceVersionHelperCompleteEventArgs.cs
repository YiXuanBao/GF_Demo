
namespace GameFramework.Resource
{
    public sealed class ResourceVersionHelperCompleteEventArgs : GameFrameworkEventArgs
    {
        public float Duration
        {
            private set;
            get;
        }

        public ResourceVersionHelperCompleteEventArgs()
        {
            
        }

        public static ResourceVersionHelperCompleteEventArgs Create(float duration)
        {
            ResourceVersionHelperCompleteEventArgs resourceVersionHelperCompleteEventArgs = ReferencePool.Acquire<ResourceVersionHelperCompleteEventArgs>();
            resourceVersionHelperCompleteEventArgs.Duration = duration;
            return resourceVersionHelperCompleteEventArgs;
        }

        public override void Clear()
        {
            
        }
    }
}
