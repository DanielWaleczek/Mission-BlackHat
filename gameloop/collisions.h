if(TempPlayer->x<=x*BlockSize+BlockSize/2 && TempPlayer->x>=(x*BlockSize)-2 && TempPlayer->y<=y*BlockSize+BlockSize/2 && TempPlayer->y>=(y*BlockSize)-2)
{
    TempPlayer->x-=TempPlayer->speed;
    TempPlayer->y-=TempPlayer->speed;
    TempPlayer->HP--;
}    //TempPlayer->x-=TempPlayer->speed;
if(TempPlayer->x<=x*BlockSize+BlockSize/2 && TempPlayer->x>=(x*BlockSize)-2 && TempPlayer->y>=y*BlockSize+BlockSize/2 && TempPlayer->y<=y*BlockSize+BlockSize+2)
{
    TempPlayer->x-=TempPlayer->speed;
    TempPlayer->y+=TempPlayer->speed;
    TempPlayer->HP--;
}    //TempPlayer->x-=TempPlayer->speed;
if(TempPlayer->x>=x*BlockSize+BlockSize/2 && TempPlayer->x<=x*BlockSize+BlockSize+2 && TempPlayer->y<=y*BlockSize+BlockSize/2 && TempPlayer->y>=(y*BlockSize)-2)
{
    TempPlayer->x+=TempPlayer->speed;
    TempPlayer->y-=TempPlayer->speed;
    TempPlayer->HP--;
}    //TempPlayer->x+=TempPlayer->speed;
if(TempPlayer->x>=x*BlockSize+BlockSize/2 && TempPlayer->x<=x*BlockSize+BlockSize+2 && TempPlayer->y>=y*BlockSize+BlockSize/2 && TempPlayer->y<=y*BlockSize+BlockSize+2)
{
    TempPlayer->x+=TempPlayer->speed;
    TempPlayer->y+=TempPlayer->speed;
    TempPlayer->HP--;
}    //TempPlayer->x+=TempPlayer->speed;


/*!
CHARACTER COLLOSIONS
!*/
if(TempCharacter->x<=x*BlockSize+BlockSize/2 && TempCharacter->x>=(x*BlockSize)-2 && TempCharacter->y<=y*BlockSize+BlockSize/2 && TempCharacter->y>=(y*BlockSize)-2)
{
    TempCharacter->x=x*BlockSize-2;
    TempCharacter->y=(y*BlockSize)-2;
    TempCharacter->y++;
}    //TempPlayer->x-=TempPlayer->speed;
if(TempCharacter->x<=x*BlockSize+BlockSize/2 && TempCharacter->x>=(x*BlockSize)-2 && TempCharacter->y>=y*BlockSize+BlockSize/2 && TempCharacter->y<=y*BlockSize+BlockSize+2)
{
    TempCharacter->x=x*BlockSize-2;
    TempCharacter->y=y*BlockSize+BlockSize+2;
    TempCharacter->y++;
}    //TempPlayer->x-=TempPlayer->speed;
if(TempCharacter->x>=x*BlockSize+BlockSize/2 && TempCharacter->x<=x*BlockSize+BlockSize+2 && TempCharacter->y<=y*BlockSize+BlockSize/2 && TempCharacter->y>=(y*BlockSize)-2)
{
    TempCharacter->x=x*BlockSize+BlockSize+2;
    TempCharacter->y=(y*BlockSize)-2;
    TempCharacter->y++;
}    //TempPlayer->x+=TempPlayer->speed;
if(TempCharacter->x>=x*BlockSize+BlockSize/2 && TempCharacter->x<=x*BlockSize+BlockSize+2 && TempCharacter->y>=y*BlockSize+BlockSize/2 && TempCharacter->y<=y*BlockSize+BlockSize+2)
{
    TempCharacter->x=x*BlockSize+BlockSize+2;
    TempCharacter->y=y*BlockSize+BlockSize+2;
    TempCharacter->y++;
}    //TempPlayer->x+=TempPlayer->speed;
