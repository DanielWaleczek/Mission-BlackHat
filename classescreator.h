#ifndef CLASSESCREATOR_H_INCLUDED
#define CLASSESCREATOR_H_INCLUDED


//!PLAYER1
Player player1;
player1.character   = Player1CharacterName;
player1.name        = Player1Name;
player1.speed       = 5.0;
player1.x           = rand()%255+64;
player1.y           = rand()%255+64;
player1.angle       = rand()%255;
player1.CameraPosition[0] = player1.x;
player1.CameraPosition[1] = player1.y;
player1.shot = false;
player1.playermodelWidth = al_get_bitmap_width(bitmap_player);
player1.playermodelHeight = al_get_bitmap_height(bitmap_player);
player1.HP          = 100;

//!Player1 Gun  --Sig Sauer P226 Enhanced Elite
player1.GunAmmo=64;
player1.GunMagAmmo=15;
player1.GunMagMaxAmmo=15;//15bullets + 1

//!PLAYER2
//if(Multiplayer)
//{
//   Player player2;
// player2.character   = Player2CharacterName;
//player2.name        = Player2Name;
//player2.speed       = 5.0;
//player2.x           = 200.0;
//player2.y           = 200.0;
//}

character enemy;
enemy.character = "data/enemy.png";
enemy.enemy = true;
enemy.name = "TestEnemy";
enemy.speed = 5.0;
enemy.x = rand()%400+64;
enemy.y = rand()%492+64;

character ally;
ally.character = "data/ally.png";
ally.enemy = false;
ally.following = false;
ally.name = "TestAlly";
ally.speed = 5.0;
ally.x = rand()%543+64;
ally.y = rand()%312+64;

#endif // CLASSESCREATOR_H_INCLUDED
