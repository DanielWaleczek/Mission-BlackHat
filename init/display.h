#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

if(DEBUG) cout<<"\n  Setting new display flags... (ALLEGRO_FULLSCREEN)";
al_set_new_display_flags(ALLEGRO_FULLSCREEN);

if(DEBUG) cout<<"\n  Getting display mode...";
al_get_display_mode(al_get_num_display_modes() - 1, &disp_data);

ScreenWidth = disp_data.width; ScreenHeight = disp_data.height;

//ScreenWidth=800; ScreenHeight=600;

if(DEBUG) cout<<"\n  Creating display...";
display=al_create_display(ScreenWidth,ScreenHeight);
if(!display)
    ExitGame("Failed to create display!");

al_clear_to_color(rgbBlack);
al_flip_display();


#endif // DISPLAY_H_INCLUDED
