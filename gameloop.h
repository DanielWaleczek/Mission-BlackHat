#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//Here will be main game loop
#include "gameloop/allycontroll.h"
#include "gameloop/bulletcontroll.h"
#include "gameloop/playercontroll.h"

void GameLoop()
{
    #include "classescreator.h"
    bool draw=1, Exit=0;
    al_clear_to_color(rgbBlack);
    al_flip_display();

    al_start_timer(timer_timer);
    al_start_timer(timer_animtimer);

    while(!Exit)
    {
        while(al_get_next_event(event_queue, &event))
        {
            switch(event.type)
            {
                case ALLEGRO_EVENT_TIMER:
                    //!MOUSE
                    al_get_mouse_state(&mouse_state);
                    MouseX = mouse_state.x; MouseY = mouse_state.y;
                    //!KEYBOARD KEYS
                    #include "gameloop/keyboard.h"
                    break;
            }
            allycontroll(&ally, &player1);
            playercontroll(&player1);

            //!VIP
            //bulletcontroll(Bullet0);
            draw=1;
        }//-!while(al_get_next_event())
        if(draw)
        {
            #include "gameloop/drawing.h"
        }

        //STOP TRIGGER - SHOTING
        player1.shot=0;
    }
}
#endif // GAMELOOP_H_INCLUDED
