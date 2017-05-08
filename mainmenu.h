#ifndef MAINMENU_H_INCLUDED
#define MAINMENU_H_INCLUDED
//MainMenu module

void CreateMainMenuObj(MenuObj *TempObj)
{

    al_draw_text(font_courier_new32, rgbRed, ScreenWidth/2, 20, ALLEGRO_ALIGN_CENTER, "Prototype version! MM v.0.0.1");

    //!New Game button
    if(TempObj->active)
        al_draw_filled_rectangle(TempObj->x1, TempObj->y1, TempObj->x2, TempObj->y2, rgbSilver);
    else
        al_draw_filled_rectangle(TempObj->x1, TempObj->y1, TempObj->x2, TempObj->y2, TempObj->color);
    al_draw_text(font_courier_new64, TempObj->textcolor, ScreenWidth/2, TempObj->y1-8, ALLEGRO_ALIGN_CENTER, TempObj->text);


    delete TempObj;
}

int MainMenu()
{
    bool draw=1, done=0;
    short int activeid=0;

    //!CC
    #include "mainmenu/classescreator.h"
    MenuObj Button_NewGame;
    Button_NewGame.color=rgbWhite;
    Button_NewGame.y1=100;
    Button_NewGame.y2=150;
    Button_NewGame.text="New Game";
    Button_NewGame.active=true;

    MenuObj Button_LoadGame;
    Button_LoadGame.y1=250;
    Button_LoadGame.y2=300;
    Button_LoadGame.text="Load Game";

    MenuObj Button_Options;
    Button_Options.y1=400;
    Button_Options.y2=450;
    Button_Options.text="Options";

    MenuObj Button_Credits;
    Button_Credits.y1=550;
    Button_Credits.y2=600;
    Button_Credits.text="Credits";

    MenuObj Button_ExitGame;
    Button_ExitGame.y1=700;
    Button_ExitGame.y2=750;
    Button_ExitGame.text="Exit Game";
    //!@PClassesCreator!


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
            al_clear_to_color(rgbBlack);
            CreateMainMenuObj(&Button_NewGame);
            CreateMainMenuObj(&Button_LoadGame);
            CreateMainMenuObj(&Button_Options);
            CreateMainMenuObj(&Button_Credits);
            CreateMainMenuObj(&Button_ExitGame);
            draw=0;
            al_flip_display();
        }
    }

    return 0;
}

#endif // MAINMENU_H_INCLUDED
