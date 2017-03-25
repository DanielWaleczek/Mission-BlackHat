#ifndef DRAWING_H_INCLUDED
#define DRAWING_H_INCLUDED

al_clear_to_color(rgbBlack);
al_draw_bitmap(bitmap_ally, ally.x, ally.y, 0);
al_draw_bitmap(bitmap_enemy, enemy.x, enemy.y, 0);
al_draw_bitmap(bitmap_player, player1.x, player1.y, 0);
al_flip_display();
draw=0;

#endif // DRAWING_H_INCLUDED
