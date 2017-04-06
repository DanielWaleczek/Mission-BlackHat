#ifndef BULLETCONTROLL_H_INCLUDED
#define BULLETCONTROLL_H_INCLUDED

//!VIP

void bulletcontroll(Player *PlayerTemp, bullet *BulletTemp)
{
    if(PlayerTemp->shot)
    {
       BulletTemp->speed=100;
       //!BULLET DIRECTION
       if(MouseX<PlayerTemp->x && MouseY<PlayerTemp->y)//TOP LEFT
       {
            BulletTemp->tx=PlayerTemp->x-MouseX+ScreenX1;
            BulletTemp->ty=PlayerTemp->y-MouseY+ScreenY1;
       }
       else if(MouseX>PlayerTemp->x && MouseY<PlayerTemp->y)//TOP RIGHT
       {
            BulletTemp->tx=PlayerTemp->x+MouseX+ScreenX1;
            BulletTemp->ty=PlayerTemp->y-MouseY+ScreenY1;
       }
       else if(MouseX<PlayerTemp->x && MouseY>PlayerTemp->y)//BOTTOM LEFT
       {
            BulletTemp->tx=PlayerTemp->x-MouseX+ScreenX1;
            BulletTemp->ty=PlayerTemp->y+MouseY+ScreenY1;
       }
       else if(MouseX>PlayerTemp->x && MouseY>PlayerTemp->y)//BOTTOM RIGHT
       {
            BulletTemp->tx=PlayerTemp->x+MouseX+ScreenX1;
            BulletTemp->ty=PlayerTemp->y+MouseY+ScreenY1;
       }
       BulletTemp->x=PlayerTemp->x;
       BulletTemp->y=PlayerTemp->y;
    }

    if(BulletTemp->x == BulletTemp->tx || BulletTemp->y == BulletTemp->ty)
        BulletTemp->speed=0;

}

#endif // BULLETCONTROLL_H_INCLUDED
