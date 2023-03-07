using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Notifications.Android;
using System;

public class NotificationControllerAndroid : MonoBehaviour
{
    public static bool initialized = false;

    private static NotificationControllerAndroid instance;
    private string title = "Claim your offline reward!";
    private string content = "Slap-man collected a lot of rewards waiting for you to claim, master. Get them now!";
    
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
            return;
        }
        instance = this;
        DontDestroyOnLoad(gameObject);
        var notificationIntentData = AndroidNotificationCenter.GetLastNotificationIntent();

        if (notificationIntentData != null)
        {
            var id = notificationIntentData.Id;
            var c = notificationIntentData.Channel;
            var notification = notificationIntentData.Notification;
        }
    }
    void Send()
    {
        var fireTime = new DateTime(DateTime.Now.Year, DateTime.Now.Month, DateTime.Now.Day, 8, 0, 0, DateTimeKind.Local);
        //SendNotification(1, fireTime, title, message, new Color32(0, 0, 0, 255));
        SendNotification(2, fireTime.AddDays(1), title, content, new Color32(0, 0, 0, 255));
        SendNotification(3, fireTime.AddDays(3), title, content, new Color32(0, 0, 0, 255));
        SendNotification(4, fireTime.AddDays(7), title, content, new Color32(0, 0, 0, 255));

    }

    private void OnApplicationQuit()
    {
        Send();
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause)
        {
            Send();
        }
    }

    public static bool Initialize()
    {
        if (initialized == true) return true;
        initialized = true;
        var channel = new AndroidNotificationChannel()
        {
            Id = "example_channel_id",
            Name = "Example Notifications",
            Importance = Importance.Default,
            Description = "Generic notifications",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);

        return true;
    }

    public static void SendNotification(int id, DateTime fireTime, string title, string message, Color color)
    {
        
        Initialize();
        var notification = new AndroidNotification();
        notification.FireTime = fireTime;
        notification.Title = title;
        notification.Text = message;
        notification.Color = color;
        notification.SmallIcon = "icon_0";
        notification.LargeIcon = "icon_1";
        //notification.RepeatInterval = new TimeSpan(1, 0, 0, 0);
        //TimeSpan timeSpan = new TimeSpan().Add(System.DateTime.Now.AddDays(3));

        AndroidNotificationCenter.SendNotificationWithExplicitID(notification, "example_channel_id", id);
    }
}
