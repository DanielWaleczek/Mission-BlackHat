#ifndef DRAWING_H_INCLUDED
#define DRAWING_H_INCLUDED

al_clear_to_color(rgbBlack);
//al_draw_scaled_bitmap(bitmap_player, 0, 0, 32, 32, player1.x, player1.y, 128, 128, 0);
al_draw_rounded_rectangle(player1.x-16, player1.y-16, player1.x+16, player1.y+16, player1.x, player1.y, rgbRed, 3);
al_flip_display();
draw=0;

#endif // DRAWING_H_INCLUDED
