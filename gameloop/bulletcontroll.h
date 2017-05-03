#ifndef BULLETCONTROLL_H_INCLUDED
#define BULLETCONTROLL_H_INCLUDED

//!VIP

void gunReload(Player *PlayerTemp)
{
    if(PlayerTemp->GunMagAmmo!=PlayerTemp->GunMagMaxAmmo)
    if(PlayerTemp->GunAmmo>PlayerTemp->GunMagMaxAmmo)
    {
        while(PlayerTemp->GunMagAmmo!=PlayerTemp->GunMagMaxAmmo)
        {
            PlayerTemp->GunMagAmmo++; PlayerTemp->GunAmmo--;
        }
    }
    else
    {
        PlayerTemp->GunMagAmmo=PlayerTemp->GunAmmo;
        PlayerTemp->GunAmmo-=PlayerTemp->GunMagAmmo;
    }

}

void drawBullets(Player *PlayerTemp)
{
    for(short int i=0; i<100; i++)
        if(bullets[i].active)
            al_draw_filled_rectangle(bullets[i].x, bullets[i].y, bullets[i].x+8, bullets[i].y+8, rgbRed);
}

void bulletcontroll(Player *PlayerTemp)
{
    for(short int i=0; i<100; i++)
    if(bullets[i].active)
    {
        bullets[i].x+=(bullets[i].tx-bullets[i].sx)/10;
        //cout<<endl<<bullets[i].tx<<" - "<<bullets[i].sx<<" /100 = "<<(bullets[i].tx-bullets[i].sx)/100;
        bullets[i].y+=(bullets[i].ty-bullets[i].sy)/10;



        if(bullets[i].x==bullets[i].tx || bullets[i].y==bullets[i].ty)
            bullets[i].active=false;

    }



}

#endif // BULLETCONTROLL_H_INCLUDED
