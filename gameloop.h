#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//Here will be main game loop
//!Globals
bullet bullets[100];

#include "gameloop/hud.h"
#include "gameloop/allycontroll.h"
#include "gameloop/bulletcontroll.h"
#include "gameloop/playercontroll.h"
#include "gameloop/mapcontroll.h"

void GameLoop()
{
    #include "classescreator.h"

    bool draw=1, Exit=0;
    al_clear_to_color(rgbBlack);
    al_flip_display();

    al_start_timer(timer_timer);
    al_start_timer(timer_longtimer);

//    cout<<"\nLoading map...";
//    mmap TestMap;
//    TestMap.id=0;
//    xml_document<> doc;
//#include "gameloop/xml.h"

    short int lavaanim=0;
    short int lavaanimnextframe=0;
    al_set_mouse_cursor(display, cursor);

    while(1)
    {
        while(al_get_next_event(event_queue, &event))
        {

            switch(event.type)
            {
            case ALLEGRO_EVENT_TIMER:
                //!MOUSE
                al_get_mouse_state(&mouse_state);
                MouseX = mouse_state.x+ScreenX1; StaticMouseX=mouse_state.x;
                MouseY = mouse_state.y+ScreenY1; StaticMouseY=mouse_state.y;
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
            cmdRed cout<<endl<<ScreenX1; cmdGray
            ScreenX2 = player1.x+ScreenWidth/2;
            ScreenY1 = player1.y-ScreenHeight/2;
            ScreenY2 = player1.y+ScreenHeight/2;

            //!WIP
            if(event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
                for(short int i=0; i<100; i++)
                    if(!bullets[i].active)
                        if(player1.GunMagAmmo>0)
                        {
                            bullets[i].active=true;
                            bullets[i].x=player1.x; bullets[i].y=player1.y;
                            bullets[i].tx=MouseX; bullets[i].ty=MouseY;
                            bullets[i].mx=player1.x-bullets[i].x; bullets[i].my=player1.y-bullets[i].y;
                            bullets[i].sx=player1.x; bullets[i].sy=player1.y;
                            player1.GunMagAmmo--;
                            al_play_sample(sample_sigsauer_gunshot, 2.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
                            i=110;
                        }
                        else
                        {
                            al_play_sample(sample_sigsauer_outofammo, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
                        }

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
