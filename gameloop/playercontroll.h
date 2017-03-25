#ifndef PLAYERCONTROLL_H_INCLUDED
#define PLAYERCONTROLL_H_INCLUDED

void playercontroll(Player *PlayerTemp)
{
    PlayerTemp->CameraPosition[0] = -(ScreenWidth/2) + (PlayerTemp->x+32/2);
    PlayerTemp->CameraPosition[1] = -(ScreenHeight/2) + (PlayerTemp->y+32/2);

    al_identity_transform(&camera);
    al_translate_transform(&camera, -PlayerTemp->CameraPosition[0], -PlayerTemp->CameraPosition[1]);
    al_use_transform(&camera);

    if(PlayerTemp->shot)
    {

    }
}

#endif // PLAYERCONTROLL_H_INCLUDED
