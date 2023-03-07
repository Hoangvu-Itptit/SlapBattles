using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Audio : MonoBehaviour
{
    public AudioSource audioSource;

    public List<AudioClip> soundAudioClips;

    private Dictionary<string, AudioClip> dicSounds = new Dictionary<string, AudioClip>();

    // Start is called before the first frame update
    void Start()
    {
        dicSounds.Add("Announcer Saying Great Job 1", soundAudioClips[0]);
        dicSounds.Add("Announcer Saying Great Job 2", soundAudioClips[1]);
        dicSounds.Add("Announcer Saying Great Job 3", soundAudioClips[2]);
        dicSounds.Add("Announcer Saying Great Job 4", soundAudioClips[3]);

        dicSounds.Add("AnnouncerGameEncouragementPhrases_Perfect_01", soundAudioClips[4]);
        dicSounds.Add("AnnouncerGameEncouragementPhrases_Perfect_02", soundAudioClips[5]);

        dicSounds.Add("AnnouncerGameEncouragementPhrases_Wow_01", soundAudioClips[6]);
        dicSounds.Add("AnnouncerGameEncouragementPhrases_Wow_02", soundAudioClips[7]);

        dicSounds.Add("Hillbilly Cool Buddy", soundAudioClips[8]);

        dicSounds.Add("Hit_01", soundAudioClips[9]);
        dicSounds.Add("Hit_02", soundAudioClips[10]);

        dicSounds.Add("Button Click", soundAudioClips[11]);
    }

    public void Playaudiosources(string namefile)
    {
        if(!PrefData.is_active_sounds) return;
        audioSource.clip = dicSounds[namefile];
        audioSource.loop = false;
        audioSource.Play();
    }

    public void Playaudiosources(AudioClip audio,bool setLoop)
    {
        if(!PrefData.is_active_sounds) return;
        audioSource.clip = audio;
        audioSource.loop = setLoop;
        audioSource.Play();
    }
}