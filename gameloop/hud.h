#ifndef HUD_H_INCLUDED
#define HUD_H_INCLUDED

void DrawHud(Player *TempPlayer)
{
    //!Hud Background
    al_draw_rectangle((TempPlayer->x-ScreenWidth/2)+32, TempPlayer->y+ScreenHeight/2-154-16
                             , (TempPlayer->x-ScreenWidth/2)+64+(100*3)+32+64, TempPlayer->y+ScreenHeight/2, rgbWhite, 12);

    //!Hud Top Background
    al_draw_filled_rectangle(TempPlayer->x-ScreenWidth/2+32, TempPlayer->y+ScreenHeight/2-154-16,
                             TempPlayer->x-ScreenWidth/2+64+(100*3)+32+64, TempPlayer->y+ScreenHeight/2, rgbGray);

    //!White HP background
    al_draw_filled_rectangle((TempPlayer->x-ScreenWidth/2)+64, TempPlayer->y+ScreenHeight/2-32
                             ,(TempPlayer->x-ScreenWidth/2)+64+(100*3), TempPlayer->y+ScreenHeight/2-64, rgbWhite);

    //!White HP edge
    al_draw_rectangle((TempPlayer->x-ScreenWidth/2)+64, TempPlayer->y+ScreenHeight/2-32
                             ,(TempPlayer->x-ScreenWidth/2)+64+(100*3), TempPlayer->y+ScreenHeight/2-64, rgbWhite, 12);

    //!Black HP edge
    al_draw_rectangle((TempPlayer->x-ScreenWidth/2)+64, TempPlayer->y+ScreenHeight/2-32
                             ,(TempPlayer->x-ScreenWidth/2)+64+(100*3), TempPlayer->y+ScreenHeight/2-64, rgbBlack, 8);

    //!HP Bar
    al_draw_filled_rectangle((TempPlayer->x-ScreenWidth/2)+64, TempPlayer->y+ScreenHeight/2-32
                             ,(TempPlayer->x-ScreenWidth/2)+64+(TempPlayer->HP*3), TempPlayer->y+ScreenHeight/2-64, rgbRed);

    //!Weapon Icon
    al_draw_bitmap(bitmap_icon_weapon01, TempPlayer->x-ScreenWidth/2+64+16, TempPlayer->y+ScreenHeight/2-154, 0);

    //!Ammo Icon
    al_draw_bitmap(bitmap_icon_ammo01, TempPlayer->x-ScreenWidth/2+128+32 ,TempPlayer->y+ScreenHeight/2-154, 0);
    if(TempPlayer->HP<=0)
        al_draw_text(font_courier_new32, rgbRed, ScreenWidth/2, ScreenHeight/2, ALLEGRO_ALIGN_CENTER, "Your game IS OVER!");

    stringstream tempstr;
    tempstr<<TempPlayer->GunMagAmmo<<"/"<<TempPlayer->GunAmmo;
    //!Ammo Text
    al_draw_text(font_courier_new64, rgbBlack, TempPlayer->x-ScreenWidth/2+128+32+64, TempPlayer->y+ScreenHeight/2-154,
                 0, tempstr.str().c_str());
}

#endif // HUD_H_INCLUDED
