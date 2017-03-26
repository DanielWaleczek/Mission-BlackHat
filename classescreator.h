#ifndef CLASSESCREATOR_H_INCLUDED
#define CLASSESCREATOR_H_INCLUDED


    //!PLAYER1
    Player player1;
    player1.character   = Player1CharacterName;
    player1.name        = Player1Name;
    player1.speed       = 5.0;
    player1.x           = 255.0;
    player1.y           = 255.0;
    player1.angle       = 0;
    player1.CameraPosition[0] = player1.x;
    player1.CameraPosition[1] = player1.y;
    player1.shot = false;
    player1.playermodelWidth = al_get_bitmap_width(bitmap_player);
    player1.playermodelHeight = al_get_bitmap_height(bitmap_player);

    //!PLAYER2
    if(Multiplayer)
    {
        Player player2;
        player2.character   = Player2CharacterName;
        player2.name        = Player2Name;
        player2.speed       = 5.0;
        player2.x           = 200.0;
        player2.y           = 200.0;
    }

    character enemy;
    enemy.character = "data/enemy.png";
    enemy.enemy = true;
    enemy.name = "TestEnemy";
    enemy.speed = 5.0;
    enemy.x = 400;
    enemy.y = 492;

    character ally;
    ally.character = "data/ally.png";
    ally.enemy = false;
    ally.following = true;
    ally.name = "TestAlly";
    ally.speed = 5.0;
    ally.x = 543;
    ally.y = 312;

    bullet *bullet1;
#endif // CLASSESCREATOR_H_INCLUDED
