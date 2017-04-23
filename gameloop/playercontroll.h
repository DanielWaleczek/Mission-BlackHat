#ifndef PLAYERCONTROLL_H_INCLUDED
#define PLAYERCONTROLL_H_INCLUDED

void playercontroll(Player *PlayerTemp)
{
    //Camera will follow the player
    PlayerTemp->CameraPosition[0] = -(ScreenWidth/2) + (PlayerTemp->x+32/2);
    PlayerTemp->CameraPosition[1] = -(ScreenHeight/2) + (PlayerTemp->y+32/2);

    //Use transform to center camera on player
    al_identity_transform(&camera);
    al_translate_transform(&camera, -PlayerTemp->CameraPosition[0], -PlayerTemp->CameraPosition[1]);
    al_use_transform(&camera);

    //!PLAYER ANGLE UPDATE
    //if(MouseX>PlayerTemp->x && MouseY<PlayerTemp->y)//top right
    //{
    PlayerTemp->angle=atan2(MouseY-ScreenHeight/2, MouseX-ScreenWidth/2);
    //cout<<endl<<PlayerTemp->angle<<"     "<<MouseX<<"    "<<MouseY;
    //al_rest(0.01);
    //}





}

#endif // PLAYERCONTROLL_H_INCLUDED
