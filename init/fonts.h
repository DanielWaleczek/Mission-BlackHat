#ifndef FONTS_H_INCLUDED
#define FONTS_H_INCLUDED

font_courier_new16 = al_load_font("data/fonts/cour.ttf", 16, 0);
font_courier_new32 = al_load_font("data/fonts/cour.ttf", 64, 0);
font_courier_regular16 = al_load_font("data/fonts/couree.fon", 16, 0);
font_courier_regular32 = al_load_font("data/fonts/couree.fon", 128, 0);
if(!(font_courier_new16 || font_courier_new32))
    ExitGame("Failed to load \"data/fonts/cour.ttf\"!");
if(!(font_courier_regular16 || font_courier_regular32))
    ExitGame("Failed to load \"data/fonts/couree.fon\"!");

#endif // FONTS_H_INCLUDED
