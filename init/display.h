#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

al_set_new_display_flags(ALLEGRO_FULLSCREEN);

display=al_create_display(1280,800);//New Display: Width=800; Height=600;
if(!display)
    ExitGame("Failed to create display!");

al_clear_to_color(rgbBlack);
al_flip_display();


#endif // DISPLAY_H_INCLUDED
