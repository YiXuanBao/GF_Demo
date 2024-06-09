namespace GameFramework.Resource
{
    /// <summary>
    /// 加载资源代理辅助器更新事件。
    /// </summary>
    public sealed class ResourceVersionHelperUpdateEventArgs : GameFrameworkEventArgs
    {
        public ResourceVersionHelperUpdateEventArgs()
        {
            Progress = 0f;
        }

        /// <summary>
        /// 获取进度。
        /// </summary>
        public float Progress
        {
            get;
            private set;
        }

        public float DownloadKBSize
        {
            get;
            private set;
        }

        public float DownloadSpeed
        {
            get;
            private set;
        }

        public float RemainingTime
        {
            get;
            private set;
        }

        public static ResourceVersionHelperUpdateEventArgs Create(float progress, float downloadKBSize, float downloadSpeed, float remainingTime)
        {
            ResourceVersionHelperUpdateEventArgs resourceVersionHelperUpdateEventArgs = ReferencePool.Acquire<ResourceVersionHelperUpdateEventArgs>();
            resourceVersionHelperUpdateEventArgs.Progress = progress;
            resourceVersionHelperUpdateEventArgs.DownloadKBSize = downloadKBSize;
            resourceVersionHelperUpdateEventArgs.DownloadSpeed = downloadSpeed;
            resourceVersionHelperUpdateEventArgs.RemainingTime = remainingTime;
            return resourceVersionHelperUpdateEventArgs;
        }

        public override void Clear()
        {
            Progress = 0f;
        }
    }
}
