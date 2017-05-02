#ifndef BULLETCONTROLL_H_INCLUDED
#define BULLETCONTROLL_H_INCLUDED

//!VIP

void drawBullets(Player *PlayerTemp)
{
    for(short int i=0; i<10; i++)
        if(bullets[i].active)
            al_draw_filled_rectangle(bullets[i].x, bullets[i].y, bullets[i].x+8, bullets[i].y+8, rgbRed);
}

void bulletcontroll(Player *PlayerTemp)
{
    for(short int i=0; i<10; i++)
    if(bullets[i].active)
    {
        bullets[i].x+=(bullets[i].tx-bullets[i].sx)/10;
        bullets[i].y+=(bullets[i].ty-bullets[i].sy)/10;


    }



}

#endif // BULLETCONTROLL_H_INCLUDED
