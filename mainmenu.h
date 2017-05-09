#ifndef MAINMENU_H_INCLUDED
#define MAINMENU_H_INCLUDED
//MainMenu module

void CreateMainMenuObj(MenuObj *TempObj)
{
    //!New Game button
    if(TempObj->active)
        al_draw_filled_rectangle(TempObj->x1, TempObj->y1, TempObj->x2, TempObj->y2, rgbSilver);
    else
        al_draw_filled_rectangle(TempObj->x1, TempObj->y1, TempObj->x2, TempObj->y2, TempObj->color);
    al_draw_rectangle(TempObj->x1, TempObj->y1, TempObj->x2, TempObj->y2, rgbSilver, 5);
    al_draw_text(font_courier_new64, TempObj->textcolor, ScreenWidth/2, TempObj->y1-8, ALLEGRO_ALIGN_CENTER, TempObj->text);


    delete TempObj;
}

int MainMenu()
{
    bool draw=1, done=0;
    short int activeid=0;

#include "mainmenu/classescreator.h"

    while(!done)
    {
        while(al_get_next_event(event_queue, &event))
        {
            if(event.type == ALLEGRO_EVENT_KEY_DOWN)
            {
                if(event.keyboard.keycode==ALLEGRO_KEY_ESCAPE)
                    ExitGame();
                else if(event.keyboard.keycode==ALLEGRO_KEY_ENTER)
                    GameLoop();
                else if(event.keyboard.keycode==ALLEGRO_KEY_DOWN)
                    activeid++;
                else if(event.keyboard.keycode==ALLEGRO_KEY_UP)
                    activeid--;
            }

            if(activeid<0)
                activeid=0;
            else if(activeid>4)
                activeid=4;

            draw=1;

        }
        if(draw)
        {
#include "mainmenu/drawing.h"
            draw=0;
        }
    }

    return 0;
}

#endif // MAINMENU_H_INCLUDED
