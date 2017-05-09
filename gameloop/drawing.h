#ifndef DRAWING_H_INCLUDED
#define DRAWING_H_INCLUDED

al_clear_to_color(rgbBlack);
drawmap(&player1, &ally, lavaanim);
if(lavaanimnextframe>=5) lavaanim++;
lavaanimnextframe++;
if(lavaanimnextframe>5) lavaanimnextframe=0;
if(lavaanim>=45) lavaanim=0;
al_draw_bitmap(bitmap_ally, ally.x, ally.y, 0);
al_draw_bitmap(bitmap_enemy, enemy.x, enemy.y, 0);

//DRAWING A PLAYER
al_draw_rotated_bitmap(bitmap_player, player1.playermodelWidth/2, player1.playermodelHeight/2, player1.x, player1.y, player1.angle, 0);

for(short int i=0; i<100; i++)
    drawBullets(&player1);

DrawHud(&player1);

al_flip_display();
draw=0;

#endif // DRAWING_H_INCLUDED
