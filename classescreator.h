#ifndef CLASSESCREATOR_H_INCLUDED
#define CLASSESCREATOR_H_INCLUDED


    //!PLAYER1
    Player player1;
    player1.character   = Player1CharacterName;
    player1.name        = Player1Name;
    player1.speed       = 20;
    player1.x           = 255.0;
    player1.y           = 255.0;

    //!PLAYER2
    if(Multiplayer)
    {
        Player player2;
        player2.character   = Player2CharacterName;
        player2.name        = Player2Name;
        player2.speed       = 1;
        player2.x           = 200.0;
        player2.y           = 200.0;
    }


#endif // CLASSESCREATOR_H_INCLUDED
