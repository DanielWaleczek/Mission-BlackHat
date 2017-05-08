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
//#include <rapidxml/rapidxml.hpp>
//#include <rapidxml/rapidxml_print.hpp>

#include <fstream>
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

bool DEBUG=false;

using namespace std;
//using namespace rapidxml;

//!OTHER FILES
#include "colors.h"
#include "globals.h"
#include "classes.h"


#include "exitgame.h"
//Game loop
#include "gameloop.h"
//Main Menu
#include "gameloop.h"
#include "mainmenu.h"

//!CORE
int main()
{
    cmdYellow cout<<"Do you want to activate Debug Mode? [Y/N]: ";
    cmdWhite
    char tempchar;
    cin>>tempchar;
    cmdYellow
    if(tempchar == 'Y' || tempchar == 'y')
    {
        DEBUG=1;
        Beep(1240, 100);
        cout<<"\a";
        Beep(1240, 100);
        cout<<"Debug mode activated!";
        al_rest(3.00);
    }
    cmdWhite

    cout<<"\n\nLoading Mission: BlackHat...";
    cmdGray
#include "init.h"  //Loading module

    MainMenu();

    //DEBUG
    ExitGame();

    return 1;
}
