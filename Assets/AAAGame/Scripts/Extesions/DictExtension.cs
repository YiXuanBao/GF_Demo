using System.Collections.Generic;


public static class DictExtension
{
    public static TValue GetValue<TKey, TValue>(this Dictionary<TKey, TValue> dict, TKey key)
    {
        if (dict == null)
        {
            YXUtils.LogError("GetValueInDictionary: <Dictionary dict> is null.");
            return default(TValue);
        }
        if (dict.ContainsKey(key))
            return dict[key];
        else
        {
            YXUtils.LogError("GetValueInDictionary: Key is not present.");
            return default(TValue);
        }
    }

    public static bool RemoveKey<TKey, TValue>(this Dictionary<TKey, TValue> dict, TKey key)
    {
        if (dict == null)
        {
            YXUtils.LogError("RemoveKeyInDictionary: <Dictionary dict> is null.");
            return false;
        }
        if (dict.ContainsKey(key))
        {
            dict.Remove(key);
            return true;
        }
        else
            return false;
    }

    public static bool InsertOrUpdate<TKey, TValue>(this Dictionary<TKey, TValue> dict, TKey key, TValue value)
    {
        if (dict == null)
        {
            YXUtils.LogError("InsertOrUpdateKeyInDictionary: <Dictionary dict> is null.");
            return false;
        }
        if (dict.ContainsKey(key))
            dict[key] = value;
        else
            dict.Add(key, value);

        return true;
    }
}
