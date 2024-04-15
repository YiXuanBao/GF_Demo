
using System.Collections.Generic;

/// <summary>
/// ����Const(���ȸ�)
/// </summary>
public static class ConstBuiltin
{
    public static readonly string HOT_FIX_DLL_DIR = "AAAGame/HotfixDlls";
    public static readonly string AOT_DLL_DIR = "AotDlls";//�����ResourcesĿ¼
    public static readonly string CheckVersionUrl = "https://gitcode.net/topgamesopen/gf_hybridclr_hotfix/-/raw/master";//�ȸ��¼���ַ
    public static readonly string VersionFile = "version.json";
    public static readonly bool NoNetworkAllow = true;//�ȸ�ģʽʱû�����Ƿ����������Ϸ
    internal const string DES_KEY = "VaBwUXzd";//��������DES����
    public static readonly string RES_KEY = "password";//AB�����ܽ���key

    /// <summary>
    /// DataTable,Config,Language��֧��AB����,�ļ���Ϊ���ļ���AB�����ļ�, AB�����ļ�����'#'+ AB���������ֽ�β
    /// </summary>
    public const char AB_TEST_TAG = '#';
    /// <summary>
    /// �û�����Key
    /// </summary>
    public static class Setting
    {
        /// <summary>
        /// ���Թ��ʻ�
        /// </summary>
        public static readonly string Language = "Setting.Language";
        /// <summary>
        /// �˳�Appʱ��
        /// </summary>
        public static readonly string QuitAppTime = "Setting.QuitAppTime";
        /// <summary>
        /// A/B������
        /// </summary>
        public static readonly string ABTestGroup = "Setting.ABTestGroup";
    }
}
