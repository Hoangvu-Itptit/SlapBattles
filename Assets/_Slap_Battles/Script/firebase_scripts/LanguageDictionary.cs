using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LanguageDictionary
{
    public static SystemLanguage GetLanguage()
    {
        return Application.systemLanguage;
    }
    static Dictionary<string, SystemLanguage> diclanguageCode = new Dictionary<string, SystemLanguage>() {
        {"English", SystemLanguage.English },
        {"Vietnamese", SystemLanguage.Vietnamese },
        {"Chinese (Simplified)", SystemLanguage.ChineseSimplified },
        {"French", SystemLanguage.French },
        {"German", SystemLanguage.German },
        {"Hindi", SystemLanguage.English },
        {"Indonesian", SystemLanguage.Indonesian },
        {"Italian", SystemLanguage.Italian },
        {"Japanese", SystemLanguage.Japanese },
        {"Korean", SystemLanguage.Korean },
        {"Portuguese", SystemLanguage.Portuguese },
        {"Russian", SystemLanguage.Russian },
        {"Spanish", SystemLanguage.Spanish },
        {"Thai", SystemLanguage.Thai },
        {"Turkish", SystemLanguage.Turkish },
        };

}
