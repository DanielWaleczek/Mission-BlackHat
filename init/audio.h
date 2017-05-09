#ifndef AUDIO_H_INCLUDED
#define AUDIO_H_INCLUDED

if(DEBUG) cout<<"\n  Reserving samples..";
\
if(!al_reserve_samples(10))
    ExitGame("Failed to reserve samples!");

if(DEBUG) cout<<"\n  Loading \"data/audio/sounds/SigSauerP226EEShot.wav\"";
sample_sigsauer_gunshot = al_load_sample("data/audio/sounds/SigSauerP226EEShot.wav");
if(!sample_sigsauer_gunshot)
    ExitGame("Failed to load \"data/audio/sounds/SigSauerP226EEShot.wav\"");

if(DEBUG) cout<<"\n  Loading \"data/audio/sounds/SSigSauerP226EEOutOfAmmo.wav\"";
sample_sigsauer_outofammo = al_load_sample("data/audio/sounds/SigSauerP226EEOutOfAmmo.wav");
if(!sample_sigsauer_outofammo)
    ExitGame("Failed to load \"data/audio/sounds/SigSauerP226EEOutOfAmmo.wav\"");

#endif // AUDIO_H_INCLUDED
