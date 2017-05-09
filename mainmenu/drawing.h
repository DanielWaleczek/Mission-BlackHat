al_clear_to_color(rgbBlack);
CreateMainMenuObj(&Button_NewGame);
CreateMainMenuObj(&Button_LoadGame);
CreateMainMenuObj(&Button_Options);
CreateMainMenuObj(&Button_Credits);
CreateMainMenuObj(&Button_ExitGame);

al_draw_text(font_courier_new32, rgbRed, ScreenWidth/2, 20, ALLEGRO_ALIGN_CENTER, "Prototype version! MM v.0.0.1");

al_draw_elliptical_arc(100, 100, 332, 332, 32, -322, rgbWhite, 5);
al_draw_elliptical_arc(100, 100, 332, 332, 32, -322, rgbSilver, 4);


al_flip_display();
