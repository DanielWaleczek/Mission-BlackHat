#ifndef ALLYCONTROLL_H_INCLUDED
#define ALLYCONTROLL_H_INCLUDED

void allycontroll(character *CharacterTemp, Player *PlayerTemp)
{
    if(CharacterTemp->following==true)
    {
        if(CharacterTemp->x-PlayerTemp->x>=64)
            CharacterTemp->x-=CharacterTemp->speed;
        else if(CharacterTemp->x-PlayerTemp->x<=-64)
            CharacterTemp->x+=CharacterTemp->speed;
        if(CharacterTemp->y-PlayerTemp->y>=64)
            CharacterTemp->y-=CharacterTemp->speed;
        else if(CharacterTemp->y-PlayerTemp->y<=-64)
            CharacterTemp->y+=CharacterTemp->speed;
    }

}

#endif // ALLYCONTROLL_H_INCLUDED
