#ifndef ALLEGRO_H_INCLUDED
#define ALLEGRO_H_INCLUDED

if(DEBUG) cout<<"\n  Initializing Allegro5 Core..."
if(!al_init())
    ExitGame("Failed to initialize Allegro5 Core!");

if(DEBUG) cout<<"\n  Initializing acodec_addon...";
if(!al_init_acodec_addon())
    ExitGame("Failed to initialize acodec_addon!");

if(DEBUG) cout<<"\n  Installing audio...";
if(!al_install_audio())
    ExitGame("Failed to install_audio!");

if(DEBUG) cout<<"\n  Initializing font_addon...";
if(!al_init_font_addon())
    ExitGame("Failed to initialize font_addon!");

if(DEBUG) cout<<"\n  Initializing image_addon...";
if(!al_init_image_addon())
    ExitGame("Failed to initialize image_addon!");

if(DEBUG) cout<<"\n  Initializing native_dialog_addon...";
if(!al_init_native_dialog_addon())
    ExitGame("Failed to initialize native_dialog_addon!");

if(DEBUG) cout<<"\n  Initializing ttf_addon...";
if(!al_init_ttf_addon())
    ExitGame("Failed to initialize ttf_addon!");

if(DEBUG) cout<<"\n  Initializing video_addon...";
if(!al_init_video_addon())
    ExitGame("Failed to initialize video_addon!");

if(DEBUG) cout<<"\n  Initializing primitives_addon...";
if(!al_init_primitives_addon())
    ExitGame("Failed to initialize primitives_addon!");

#endif // ALLEGRO_H_INCLUDED
