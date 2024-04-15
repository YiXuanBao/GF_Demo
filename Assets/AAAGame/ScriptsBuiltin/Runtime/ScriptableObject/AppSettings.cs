using GameFramework.Resource;
using UnityEngine;

[CreateAssetMenu(fileName = "AppSettings", menuName = "ScriptableObject/AppSettings��App�������ò�����")]
public class AppSettings : ScriptableObject
{
    private static AppSettings mInstance = null;
    public static AppSettings Instance
    {
        get
        {
            if (mInstance == null)
            {
                mInstance = Resources.Load<AppSettings>("AppSettings");
            }
            return mInstance;
        }
    }
    [Tooltip("debugģʽ,Ĭ����ʾdebug����")]
    public bool DebugMode = false;
    [Tooltip("��Դģʽ: ����/ȫ�ȸ�/��Ҫʱ�ȸ�")]
    public ResourceMode ResourceMode = ResourceMode.Package;
    [Tooltip("��Ļ��Ʒֱ���:")]
    public Vector2Int DesignResolution = new Vector2Int(750, 1334);
}
