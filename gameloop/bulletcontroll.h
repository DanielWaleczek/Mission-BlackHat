#ifndef BULLETCONTROLL_H_INCLUDED
#define BULLETCONTROLL_H_INCLUDED

//!VIP
void CreateBullet()
{
    bullet *bulletid;

    bulletid++;
}

void bulletcontroll(Player *PlayerTemp, bullet *BulletTemp)
{
    if(PlayerTemp->shot)
    {
       BulletTemp->speed=100;
       BulletTemp->tx=MouseX;
       BulletTemp->ty=MouseY;
       BulletTemp->x=PlayerTemp->x;
       BulletTemp->y=PlayerTemp->y;
    }

    if(BulletTemp->x > BulletTemp->tx) BulletTemp->x--;
    if(BulletTemp->x < BulletTemp->tx) BulletTemp->x++;
    if(BulletTemp->y > BulletTemp->ty) BulletTemp->y--;
    if(BulletTemp->y < BulletTemp->ty) BulletTemp->y++;

    if(BulletTemp->x == BulletTemp->tx || BulletTemp->y == BulletTemp->ty)
        BulletTemp->speed=0;

}

#endif // BULLETCONTROLL_H_INCLUDED
