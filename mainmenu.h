#ifndef MAINMENU_H_INCLUDED
#define MAINMENU_H_INCLUDED
//MainMenu module

int CreateMainMenu()
{
    al_clear_to_color(rgbBlue);
    al_flip_display();
    al_rest(2);
    al_clear_to_color(rgbGreen);
    al_flip_display();
    al_rest(2);
    al_clear_to_color(rgbRed);
    al_flip_display();
    al_rest(2);

    return 0;
}

int MainMenu()
{
    //!CREATING MAIN MENU//
    CreateMainMenu();


    //if mouse.click == x1 y1 x2 y2
        //NewGame();
    //else if mouse.click == x1 y1 x2 y2
        //LoadGame();
    //else if mouse.click == x1 y1 x2 y2
        //Options();
    //else if mouse.click == x1 y1 x2 y2
        //Credits();
    //else if mouse.click == x1 y1 x2 y2
        //ExitGame();


    return 0;
}

#endif // MAINMENU_H_INCLUDED
