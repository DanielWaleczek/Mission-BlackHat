#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//Here will be main game loop
#include "gameloop/allycontroll.h"
#include "gameloop/bulletcontroll.h"
#include "gameloop/playercontroll.h"
#include "gameloop/mapcontroll.h"

void GameLoop()
{
    cout<<endl<<"BOF gameloop.h";
#include "classescreator.h"
    cout<<endl<<"!@#!";
    bool draw=1, Exit=0;
    al_clear_to_color(rgbBlack);
    al_flip_display();

    al_start_timer(timer_timer);
    al_start_timer(timer_animtimer);

    cout<<"\nLoading map...";
    mmap TestMap;
    TestMap.id=0;
//    xml_document<> doc;
#include "gameloop/xml.h"

    while(!Exit)
    {
        while(al_get_next_event(event_queue, &event))
        {
            switch(event.type)
            {
            case ALLEGRO_EVENT_TIMER:
                //!MOUSE
                al_get_mouse_state(&mouse_state);
                MouseX = mouse_state.x;
                MouseY = mouse_state.y;
                //!KEYBOARD KEYS
#include "gameloop/keyboard.h"
                break;
            }
            mapcontroll();
            allycontroll(&ally, &player1);
            playercontroll(&player1);

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

        //STOP TRIGGER - SHOTING
        player1.shot=0;
    }
    cout<<"\nEOF gameloop.h!";
}
#endif // GAMELOOP_H_INCLUDED
