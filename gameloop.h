#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//Here will be main game loop
#include "classes.h"


void GameLoop()
{
    bool draw=1, Exit=0;
    al_clear_to_color(rgbBlack);
    al_flip_display();

    #include "classescreator.h"

    al_start_timer(timer_timer);
    al_start_timer(timer_animtimer);

    while(!Exit)
    {
        while(al_get_next_event(event_queue, &event))
        {
            switch(event.type)
            {
                case ALLEGRO_EVENT_TIMER:
                    //!KEYBOARD KEYS
                    #include "gameloop/keyboard.h"
                    break;
            }
            draw=1;
        }//-!while(al_get_next_event())
        if(draw)
        {
            #include "gameloop/drawing.h"
        }
    }
}
#endif // GAMELOOP_H_INCLUDED
