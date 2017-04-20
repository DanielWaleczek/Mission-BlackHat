//!MAIN INCLUDES
//For console print
#include <iostream>
//For Windows' CMD commands
#include <stdlib.h>
//For strings
#include <string>
//Advanced math calculations
#include <math.h>
//Creating one string from two others
#include <sstream>

#include <fstream>
#include <glib/glib.h>
#include <vector>
#include <windows.h>
#include <memory>
#include <stdio.h>
//#include <libxml/parser.h>
//#include <libxml/tree.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
//#include <allegro5/allegro_tiled.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_video.h>

using namespace std;

//!OTHER FILES
#include "globals.h"
#include "classes.h"
#include "colors.h"

#include "exitgame.h"
//Game loop
#include "gameloop.h"

//Main Menu
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
