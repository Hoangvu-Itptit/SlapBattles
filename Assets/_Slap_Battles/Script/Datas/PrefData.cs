using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrefData
{
    public static int cur_level
    {
        get { return PlayerPrefs.GetInt("Slap_cur_level", 1); }
        set { PlayerPrefs.SetInt("Slap_cur_level", value); }
    }

    public static void set_last_spin()
    {
        PlayerPrefs.SetString("last_spin", DateTime.Now.ToString());
    }

    public static DateTime get_last_spin()
    {
        var s = PlayerPrefs.GetString("last_spin");
        if (string.IsNullOrEmpty(s))
        {
            return DateTime.MinValue;
        }
        else
        {
            DateTime lastTime;
            if (DateTime.TryParse(s, out lastTime))
            {
                return lastTime;
            }
            else
            {
                return DateTime.MinValue;
            }
        }
    }

    public static bool is_Bigger
    {
        get { return PlayerPrefs.GetInt("is_bigger", 0) == 1; }
        set
        {
            if (value)
            {
                PlayerPrefs.SetInt("is_bigger", 1);
            }
            else
            {
                PlayerPrefs.SetInt("is_bigger", 0);
            }
        }
    }

    public static int cur_skin
    {
        get { return PlayerPrefs.GetInt("cur_skin", 1); }
        set { PlayerPrefs.SetInt("cur_skin", value); }
    }

    public static int cur_hand
    {
        get { return PlayerPrefs.GetInt("cur_hand", 1); }
        set
        {
            value = Mathf.Clamp(value, 0, 22);
            PlayerPrefs.SetInt("cur_hand", value);
        }
    }

    public static int cur_coin
    {
        get { return PlayerPrefs.GetInt("cur_coin", 0); }
        set { PlayerPrefs.SetInt("cur_coin", value); }
    }

    public static bool is_owned_skin(int index)
    {
        return PlayerPrefs.GetInt("skin_" + index, 0) >= 1;
    }

    public static void set_earn_skin(int index, int value = 1)
    {
        PlayerPrefs.SetInt("skin_" + index, value);
    }

    public static bool is_active_sounds
    {
        get { return PlayerPrefs.GetInt("active_sounds", 1) == 1; }
        set
        {
            int active;
            if (value) active = 1;
            else active = 0;
            PlayerPrefs.SetInt("active_sounds", active);
        }
    }

    public static string player_name
    {
        get { return PlayerPrefs.GetString("player_name", "Player"); }
        set { PlayerPrefs.SetString("player_name", value); }
    }

    public static bool is_select_name
    {
        get { return PlayerPrefs.GetInt("is_select_name", 0) == 1; }
        set
        {
            int active;
            if (value) active = 1;
            else active = 0;
            PlayerPrefs.SetInt("is_select_name", active);
        }
    }

    public static int get_skin_number(int index)
    {
        return PlayerPrefs.GetInt("skin_" + index, 0);
    }

    public static bool is_owned_hand(int index)
    {
        return PlayerPrefs.GetInt("hand_" + index, 0) == 1;
    }

    public static void set_earn_hand(int index, int value = 1)
    {
        PlayerPrefs.SetInt("hand_" + index, value);
    }

    public static int get_hand_number(int index)
    {
        return PlayerPrefs.GetInt("hand_" + index, 0);
    }

    public static int player_point
    {
        get { return PlayerPrefs.GetInt("player_point", 0); }
        set { PlayerPrefs.SetInt("player_point", value); }
    }

    public static DateTime get_last_login()
    {
        var s = PlayerPrefs.GetString("last_login");
        if (string.IsNullOrEmpty(s))
        {
            return DateTime.MinValue;
        }
        else
        {
            DateTime lastTime;
            if (DateTime.TryParse(s, out lastTime))
            {
                return lastTime;
            }
            else
            {
                return DateTime.MinValue;
            }
        }
    }

    public static void set_last_login()
    {
        PlayerPrefs.SetString("last_login", DateTime.Today.ToString());
    }

    public static int number_of_day_login
    {
        get { return PlayerPrefs.GetInt("last_day_login"); }
        // set { PlayerPrefs.SetInt("last_day_login", PlayerPrefs.GetInt("last_day_login")+1); }
        set
        {
            if (value > 28)
            {
                value = 1;
            }

            PlayerPrefs.SetInt("last_day_login", value);
        }
    }

    public static bool is_claim_daily_reward()
    {
        return PlayerPrefs.GetInt("player_claim") == 1;
    }

    public static void set_claim_daily_reward(int check)
    {
        PlayerPrefs.SetInt("player_claim", check);
    }

    public static int number_star_have
    {
        get { return PlayerPrefs.GetInt("number_star_have", 0); }
        set { PlayerPrefs.SetInt("number_star_have", value); }
    }

    public static void set_last_wheel()
    {
        PlayerPrefs.SetString("last_wheel", DateTime.Now.ToString());
    }

    public static DateTime get_last_wheel()
    {
        var s = PlayerPrefs.GetString("last_wheel");
        if (string.IsNullOrEmpty(s))
        {
            return DateTime.MinValue;
        }
        else
        {
            DateTime lastTime;
            if (DateTime.TryParse(s, out lastTime))
            {
                return lastTime;
            }
            else
            {
                return DateTime.MinValue;
            }
        }
    }

    public static bool is_free_wheel
    {
        get { return PlayerPrefs.GetInt("is_free_wheel", 1) == 1; }
        set
        {
            if (value) PlayerPrefs.SetInt("is_free_wheel", 1);
            else PlayerPrefs.SetInt("is_free_wheel", 0);
        }
    }

    public static void set_last_free_wheel()
    {
        PlayerPrefs.SetString("last_free_wheel", DateTime.Now.ToString());
    }

    public static DateTime get_last_free_wheel()
    {
        var s = PlayerPrefs.GetString("last_free_wheel");
        if (string.IsNullOrEmpty(s))
        {
            return DateTime.MinValue;
        }
        else
        {
            DateTime lastTime;
            if (DateTime.TryParse(s, out lastTime))
            {
                return lastTime;
            }
            else
            {
                return DateTime.MinValue;
            }
        }
    }

    /// <summary>
    /// Check if the player has rated or not
    /// </summary>
    public static bool is_rate()
    {
        return PlayerPrefs.GetInt("was_rate") == 1;
    }

    /// <summary>
    /// Has the player rated or not?
    /// </summary>
    /// <param name="index">1 is rate or 0 is not rate</param>
    public static void set_player_rate(int index)
    {
        PlayerPrefs.SetInt("was_rate", index);
    }

    public static bool can_rate
    {
        get { return PlayerPrefs.GetInt("can_rate", 1) == 1; }
        set
        {
            int can_rate = value ? 1 : 0;
            PlayerPrefs.SetInt("can_rate", can_rate);
        }
    }

    public static int num_level_play
    {
        get { return PlayerPrefs.GetInt("num_level_play", 0); }
        set { PlayerPrefs.SetInt("num_level_play", value); }
    }
}