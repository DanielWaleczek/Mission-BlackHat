//!MAIN INCLUDES
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <sstream>
#include <vector>
#include <windows.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_video.h>

using namespace std;

//!OTHER FILES
#include "globals.h"
#include "classes.h"
#include "colors.h"

//Game loop
#include "gameloop.h"

//Main Menu
#include "exitgame.h"
#include "gameloop.h"
#include "mainmenu.h"

//!CORE
int main()
{
    #include "init.h"  //Loading module


    MainMenu();

    //DEBUG
    ExitGame();

    return 1;
}
