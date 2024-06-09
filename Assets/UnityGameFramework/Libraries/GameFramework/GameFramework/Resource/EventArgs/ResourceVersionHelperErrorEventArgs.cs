
namespace GameFramework.Resource
{
    public sealed class ResourceVersionHelperErrorEventArgs : GameFrameworkEventArgs
    {
        public ResourceVersionHelperErrorEventArgs()
        {
            ErrorMessage = null;
        }

        /// <summary>
        /// 获取错误信息。
        /// </summary>
        public string ErrorMessage
        {
            get;
            private set;
        }

        public static ResourceVersionHelperErrorEventArgs Create(string errorMessage)
        {
            ResourceVersionHelperErrorEventArgs resourceVersionHelperErrorEventArgs = ReferencePool.Acquire<ResourceVersionHelperErrorEventArgs>();

            resourceVersionHelperErrorEventArgs.ErrorMessage = errorMessage;
            return resourceVersionHelperErrorEventArgs;
        }

        public override void Clear()
        {
            ErrorMessage = null;
        }
    }
}
