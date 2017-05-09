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
    al_rest(0.2);
    bool draw=1, done=0;
    short int activeid=0;

#include "mainmenu/classescreator.h"

    while(!done)
    {
        while(al_get_next_event(event_queue, &event))
        {
            short int mousex=event.mouse.x; short int mousey=event.mouse.y;
            if(event.type == ALLEGRO_EVENT_KEY_DOWN)
            {
                if(event.keyboard.keycode==ALLEGRO_KEY_ESCAPE)
                    ExitGame();
                else if(event.keyboard.keycode==ALLEGRO_KEY_ENTER)
                {
                    if(activeid==0)
                        GameLoop();
                    else if(activeid==4)
                        ExitGame();
                }
                else if(event.keyboard.keycode==ALLEGRO_KEY_DOWN)
                    activeid++;
                else if(event.keyboard.keycode==ALLEGRO_KEY_UP)
                    activeid--;
            }
            else if(event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN)
            {
                if(mousex>Button_NewGame.x1-5 && mousex<Button_NewGame.x2+5 && mousey>Button_NewGame.y1-5 && mousey<Button_NewGame.y2+5)
                    if(event.mouse.button & 1)
                        GameLoop();
                else if(mousex>Button_LoadGame.x1-5 && mousex<Button_LoadGame.x2+5 && mousey>Button_LoadGame.y1-5 && mousey<Button_LoadGame.y2+5)
                    activeid=1;
                else if(mousex>Button_Options.x1-5 && mousex<Button_Options.x2+5 && mousey>Button_Options.y1-5 && mousey<Button_Options.y2+5)
                    activeid=2;
                else if(mousex>Button_Credits.x1-5 && mousex<Button_Credits.x2+5 && mousey>Button_Credits.y1-5 && mousey<Button_Credits.y2+5)
                    activeid=3;
                else if(mousex>Button_ExitGame.x1-5 && mousex<Button_ExitGame.x2+5 && mousey>Button_ExitGame.y1-5 && mousey<Button_ExitGame.y2+5)
                    if(event.mouse.button & 1)
                        ExitGame();
            }

            if(activeid<0)
                activeid=0;
            else if(activeid>4)
                activeid=4;

            Button_NewGame.active=0;
            Button_LoadGame.active=0;
            Button_Options.active=0;
            Button_Credits.active=0;
            Button_ExitGame.active=0;

            if(mousex>Button_NewGame.x1-5 && mousex<Button_NewGame.x2+5 && mousey>Button_NewGame.y1-5 && mousey<Button_NewGame.y2+5)
                activeid=0;
            else if(mousex>Button_LoadGame.x1-5 && mousex<Button_LoadGame.x2+5 && mousey>Button_LoadGame.y1-5 && mousey<Button_LoadGame.y2+5)
                activeid=1;
            else if(mousex>Button_Options.x1-5 && mousex<Button_Options.x2+5 && mousey>Button_Options.y1-5 && mousey<Button_Options.y2+5)
                activeid=2;
            else if(mousex>Button_Credits.x1-5 && mousex<Button_Credits.x2+5 && mousey>Button_Credits.y1-5 && mousey<Button_Credits.y2+5)
                activeid=3;
            else if(mousex>Button_ExitGame.x1-5 && mousex<Button_ExitGame.x2+5 && mousey>Button_ExitGame.y1-5 && mousey<Button_ExitGame.y2+5)
                activeid=4;


            if(activeid==0)
                Button_NewGame.active=true;
            else if(activeid==1)
                Button_LoadGame.active=true;
            else if(activeid==2)
                Button_Options.active=true;
            else if(activeid==3)
                Button_Credits.active=true;
            else if(activeid==4)
                Button_ExitGame.active=true;





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
