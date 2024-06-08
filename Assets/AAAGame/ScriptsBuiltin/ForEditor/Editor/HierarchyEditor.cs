using UnityEditor;
using UnityEngine;

[InitializeOnLoad]
public class HierarchyEditor
{
    public static Color backgroundColor = new Color(1, 1, 1, .04f);
    public static Color selectionColor = new Color(.6f, .6f, 1, 1f);
    public static Color highlightColor = new Color(.2f, .2f, 1f, .15f);
    public static Color highlightColorSolid = new Color(.215f, .215f, .337f);
    public static Color selectionColorDefault = new Color(.17f, .35f, .6f);
    public static Color normalFontColor = new Color(1, 1, 1, .8f);
    public static Color lineColor = new Color(1, 1, 1, .1f);
    public static Color lineColor2 = new Color(1, 1, 1, .2f);
    public static Color pickLineColor = new Color(1, .3f, .3f, .5f);

    private static GUIStyle rename_Style;
    public static GUIStyle transparentButtonStyle, blackButtonStyle;
    private static readonly Vector2 OFFSET = Vector2.right * 18;

    public static GUIContent srContent, cldContent;
    public static GUIContent crossContent, resetContent;
    public static Texture folderTexture;

    static HierarchyEditor()
    {
        EditorApplication.hierarchyWindowItemOnGUI += HandleHierarchyWindowItemOnGUI;

        rename_Style = new GUIStyle();
        rename_Style.fixedHeight = 10;
        rename_Style.fixedWidth = 10;
        transparentButtonStyle = new GUIStyle();
        blackButtonStyle = new GUIStyle();

        Texture2D normalTexture = new Texture2D(1, 1);
        normalTexture.SetPixel(0, 0, Color.clear);
        normalTexture.Apply();

        Texture2D hoverTexture = new Texture2D(1, 1);
        hoverTexture.SetPixel(0, 0, new Color(1, 1, 1, 0.2f));
        hoverTexture.Apply();

        transparentButtonStyle.normal.background = normalTexture;
        transparentButtonStyle.hover.background = hoverTexture;

        transparentButtonStyle = new GUIStyle();

        normalTexture = new Texture2D(1, 1);
        normalTexture.SetPixel(0, 0, new Color(.1f, .1f, .1f, 0.9f));
        normalTexture.Apply();

        hoverTexture = new Texture2D(1, 1);
        hoverTexture.SetPixel(0, 0, new Color(.4f, .4f, .4f, 0.9f));
        hoverTexture.Apply();

        blackButtonStyle.normal.background = normalTexture;
        blackButtonStyle.hover.background = hoverTexture;

        highlightColorSolid.a = 1;
    }

    private static void HandleHierarchyWindowItemOnGUI(int instanceID, Rect selectionRect)
    {
        GameObject obj = EditorUtility.InstanceIDToObject(instanceID) as GameObject;
        //separators
        bool isSeparator = obj != null && obj.name[obj.name.Length - 1] == '-';
        bool isPrefab = false;
        if (obj != null)
        {
            PrefabAssetType prefabType = PrefabUtility.GetPrefabAssetType(obj);
            isPrefab = prefabType == PrefabAssetType.Regular;
        }

        if (isSeparator)
        {
            EditorGUI.DrawRect(selectionRect, highlightColor);
            Rect offsetRect = new Rect(selectionRect.position + OFFSET, selectionRect.size);

            Color bgColor = new Color(.18f, .18f, .18f); //Updated color
            if (Selection.activeGameObject?.GetInstanceID() == instanceID)
            {
                bgColor = selectionColorDefault;
            }

            EditorGUI.DrawRect(offsetRect, bgColor);

            Rect separatorRect = new Rect(selectionRect.position + Vector2.up * 15 + Vector2.left * 17, new Vector2(selectionRect.size.x * 1.5f, 1));
            EditorGUI.DrawRect(separatorRect, lineColor2);
            EditorGUI.LabelField(offsetRect, obj.name, new GUIStyle()
            {
                normal = new GUIStyleState() { textColor = Color.white * (obj.activeSelf ? .9f : .5f) },
                fontStyle = FontStyle.Bold,
                fontSize = 13,
                alignment = TextAnchor.MiddleCenter,
            });
        }
        if (obj != null && !isSeparator)
        {
            //active toggle
            Rect activeRect = new Rect(selectionRect);
            if (!isPrefab)
                activeRect.xMax += 16;
            activeRect.xMin = activeRect.xMax - 16;
            activeRect.width = 16;

            bool prevActive = obj.activeSelf;
            bool isActive = GUI.Toggle(activeRect, prevActive, "");
            if (prevActive != isActive)
            {
                obj.SetActive(isActive);
                if (EditorApplication.isPlaying == false)
                {
                    UnityEditor.SceneManagement.EditorSceneManager.MarkSceneDirty(obj.scene);
                    EditorUtility.SetDirty(obj);
                }
            }
        }

        Rect lineRect = new Rect(selectionRect);
        lineRect.xMin -= 20;
        lineRect.xMax = lineRect.xMin + 3;
        Color col = lineColor;
        EditorGUI.DrawRect(lineRect, col);

        //if (obj != null && !isSeparator && (selectionRect.yMin / 16) % 2 == 0)
        //{
        //    selectionRect.width *= 2;
        //    EditorGUI.DrawRect(selectionRect, backgroundColor);
        //}
    }
}

