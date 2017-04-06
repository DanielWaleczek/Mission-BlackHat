#ifndef GLOBALS_H_INCLUDED
#define GLOBALS_H_INCLUDED

#define CONSOLE_NAME        "Debug Console"
#define GAME_WINDOW_NAME    "Mission: Prison v0.0"

////////////////////
//GLOBAL VARIABLES//
////////////////////
//You can edit global variables, but this doesn't change anything. Those variables are dynamic!
//INPUT DEVICES
bool MouseInstalled         = false;//true if the mouse is successfully installed
bool KeyboardInstalled      = false;//true if the keyboard is successfully installed
bool JoystickInstalled      = false;//true if the joystick is successfully installed
short int MouseX            = 0;//mouse X position in pixels
short int MouseY            = 0;//mouse Y position in pixels

//ADDITIONAL FEATURES IN THE GAME
bool Multiplayer            = 0;//if true then game is in Multiplayer mode

//DISPLAY VARIABLES
short int CenterX           = 0;//screen X center (ScreenWidth/2)
short int CenterY           = 0;//screen Y center (ScreenHeight/2)

//AUDIO VARIABLES
short int SamplesNumber     = 10;//Number of samples which are play on the same time.

//PERFORMANCE VARIABLES
const float FPS             = 30;//Screen update per seconds
const float AnimFPS         = 10;//Animation update per seconds

//CAMERA VARIABLES
float OldCameraPosition     = 0;//Old camera position.
float CameraScale           = 1.0;//Camera approximation (1.0 is normal and max approximation)

//LOADING BAR
short int ProgressBar       = 0;
short int ProgressBarRed    = 255;
short int ProgressBarGreen  = 0;

//OTHER
bool AllegroInitialized     = 0;
bool GameLoaded             = 0;
bool PlayIntro              = 1;
bool Debug                  = 1;

//PLAYERS
string Player1Name          = "";
string Player2Name          = "";
string Player1CharacterName = "data/player.png";
string Player2CharacterName = "";

////////////////////
//CONFIG VARIABLES//
////////////////////
//These are default config values! You can change those values only in config file!
string Language             = "en";//for now only "en", "pl"
bool Fullscreen             = 1;//1 - on; 0 - off;
short int ScreenWidth       = 800;//pixels
short int ScreenHeight      = 600;//pixels
float SoundsVolume          = 0.5;
float GuiVolume             = 0.5;
float MusicVolume           = 0.5;

float ScreenX1              = 0;
float ScreenX2              = 0;
float ScreenY1              = 0;
float ScreenY2              = 0;


////////////////////
//////ALLEGRO 5/////
////////////////////
//BITMAPS
ALLEGRO_BITMAP *bitmap_ally;
ALLEGRO_BITMAP *bitmap_player;
ALLEGRO_BITMAP *bitmap_enemy;
ALLEGRO_BITMAP *bitmap_temp;

//SPRITES
//!ALLEGRO_BITMAP *anim_walk[10];

//DISPLAY
ALLEGRO_DISPLAY *display;//Main display
ALLEGRO_DISPLAY_MODE disp_data;//Display values like display format, display width, height, and refresh rate.

//EVENTS & TIMERS
ALLEGRO_EVENT event;//Contains all events
ALLEGRO_EVENT_QUEUE *event_queue;//An event queue is where events are placed in a first-in-first-out container and are removed when the events are being handled by the main program.
ALLEGRO_TIMER *timer_animtimer;//Additional timer (for animations)
ALLEGRO_TIMER *timer_timer;//Main timer

//FONTS
ALLEGRO_FONT *font_courier_new16;//Name and size in px
ALLEGRO_FONT *font_courier_new32;
ALLEGRO_FONT *font_courier_regular16;
ALLEGRO_FONT *font_courier_regular32;

//INPUT DEVICES
ALLEGRO_KEYBOARD_STATE keyboard_state;//This is a structure that is used to hold a "snapshot" of a keyboard's state at a particular instant.
ALLEGRO_JOYSTICK *joystick;//This is an abstract data type representing a physical joystick.
ALLEGRO_JOYSTICK_STATE joystick_state;//This is a structure that is used to hold a "snapshot" of a joystick's axes and buttons at a particular instant.
ALLEGRO_MOUSE_STATE mouse_state;

//MUSIC
//Samples are destroyed after creating instances (To release the RAM)
//ALLEGRO_SAMPLE *sample_sample;
//ALLEGRO_SAMPLE_INSTANCE *music_sample;

//SOUNDS
//Samples are destroyed after creating instances (To release the RAM)

//AUDIO MIXERS
//A mixer is a type of stream which mixes together attached streams into a single buffer.
ALLEGRO_MIXER *mixer_sounds;//Mixer for Sounds
ALLEGRO_MIXER *mixer_gui;
ALLEGRO_MIXER *mixer_music;//Mixer for Music

ALLEGRO_TRANSFORM camera;

//VOICES
//A voice represents an audio device on the system, which may be a real device, or an abstract device provided by the operating system.
ALLEGRO_VOICE *audio_sounds;//Voice for mixer_sounds
ALLEGRO_VOICE *audio_gui;
ALLEGRO_VOICE *audio_music;//Voice for mixer_music

//FILES
ALLEGRO_FILE *file_config;//Configuration file
ALLEGRO_FILE *file_locale;//Locale file

//CONFIG
ALLEGRO_CONFIG *GameConfig;//Config
ALLEGRO_CONFIG *flocale;//Locale

ALLEGRO_MAP *Map;


#endif // GLOBALS_H_INCLUDED
