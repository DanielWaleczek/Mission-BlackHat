#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//Here will be main game loop
//!Globals
bullet bullets[10];

#include "gameloop/hud.h"
#include "gameloop/allycontroll.h"
#include "gameloop/bulletcontroll.h"
#include "gameloop/playercontroll.h"
#include "gameloop/mapcontroll.h"

void GameLoop()
{
    cout<<endl<<"BOF gameloop.h";

    #include "classescreator.h"

    bool draw=1, Exit=0;
    al_clear_to_color(rgbBlack);
    al_flip_display();

    al_start_timer(timer_timer);
    al_start_timer(timer_animtimer);

//    cout<<"\nLoading map...";
//    mmap TestMap;
//    TestMap.id=0;
//    xml_document<> doc;
//#include "gameloop/xml.h"

    short int lavaanim=0;
    al_set_mouse_cursor(display, cursor);

    while(!Exit)
    {
        while(al_get_next_event(event_queue, &event))
        {
            if(event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
                for(short int i=0; i<10; i++)
                    if(!bullets[i].active)
                        if(player1.GunMagAmmo>0)
                        {
                            bullets[i].active=true;
                            bullets[i].x=player1.x; bullets[i].y=player1.y;
                            bullets[i].tx=MouseX; bullets[i].ty=MouseY;
                            cout<<endl<<MouseX<<" "<<MouseY;
                            bullets[i].mx=player1.x-bullets[i].x; bullets[i].my=player1.y-bullets[i].y;
                            bullets[i].sx=player1.x; bullets[i].sy=player1.y;
                            cout<<endl<<bullets[i].mx<<" "<<bullets[i].my;
                            player1.GunMagAmmo--;
                            i=11;
                        }
            switch(event.type)
            {
            case ALLEGRO_EVENT_TIMER:
                //!MOUSE
                al_get_mouse_state(&mouse_state);
                MouseX = mouse_state.x+ScreenX1;
                MouseY = mouse_state.y+ScreenY1;
                //!KEYBOARD KEYS
#include "gameloop/keyboard.h"
                break;
            }
            mapcontroll();
            allycontroll(&ally, &player1);
            playercontroll(&player1);
            bulletcontroll(&player1);

            //!Camera Control
            ScreenX1 = player1.x-ScreenWidth/2;
            ScreenX2 = player1.x+ScreenWidth/2;
            ScreenY1 = player1.x-ScreenHeight/2;
            ScreenY2 = player1.x+ScreenHeight/2;

            //!WIP

            draw=1;
        }//-!while(al_get_next_event())
        //bulletcontroll(&player1, bullet1);
        if(draw)
        {
#include "gameloop/drawing.h"
        }

    }
}
#endif // GAMELOOP_H_INCLUDED
