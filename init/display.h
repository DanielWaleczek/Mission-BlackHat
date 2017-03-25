#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

al_set_new_display_flags(ALLEGRO_WINDOWED);
al_get_display_mode(al_get_num_display_modes() - 1, &disp_data);

ScreenWidth = disp_data.width;
ScreenHeight = disp_data.height;

display=al_create_display(ScreenWidth,ScreenHeight);
if(!display)
    ExitGame("Failed to create display!");

al_clear_to_color(rgbBlack);
al_flip_display();


#endif // DISPLAY_H_INCLUDED
