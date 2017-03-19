#ifndef EXITGAME_H_INCLUDED
#define EXITGAME_H_INCLUDED

int ExitGame(string ErrorName="")
{
    if(ErrorName!="")
    {
        cmdRed cout<<endl<<endl<<ErrorName<<"\n  Failed to start the game! Shutting down..."; cmdGray
    }
    cmdWhite cout<<"\nShutting down the game..."; cmdGray

    //!Uninstalling input devices...
    cout<<"\nUninstalling input devices...";
    if(JoystickInstalled)
        al_uninstall_joystick();
    al_uninstall_mouse();
    al_uninstall_keyboard();

    al_destroy_bitmap(bitmap_player);

    //!Destroying fonts...
    cout<<"\nDestroying fonts...";
    al_destroy_font(font_courier_new16);
    al_destroy_font(font_courier_new32);
    al_destroy_font(font_courier_regular16);
    al_destroy_font(font_courier_regular32);

    //!Destroying displays...
    cout<<"\nDestroying display...";
    al_destroy_display(display);

    //!Shutting down Allegro5
    //cout<<endl<<endl; cmdWhite cout<<"Shutting down Mission: BlackHat..."; cmdGray
    /*cout<<"\n Shutting down video_addon...";
    al_shutdown_video_addon();
    cout<<"\n Shutting down ttf_addon...";
    al_shutdown_ttf_addon();
    cout<<"\n Shutting down native_dialog_addon...";
    al_shutdown_native_dialog_addon();
    cout<<"\n Shutting down image_addon...";
    al_shutdown_image_addon();
    cout<<"\n Shutting down font_addon...";
    al_shutdown_font_addon();
    cout<<"\n Uninstalling audio...";
    al_uninstall_audio();*/

    cout<<"\nShutting down game core...";
    al_uninstall_system();


    exit(0);
}

#endif // EXITGAME_H_INCLUDED
