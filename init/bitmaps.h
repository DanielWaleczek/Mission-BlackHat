#ifndef BITMAPS_H_INCLUDED
#define BITMAPS_H_INCLUDED


stringstream sstream;
sstream<<Player1CharacterName;

if(DEBUG) cout<<"\n  Loading \"data/ally.png\"";
bitmap_ally = al_load_bitmap("data/ally.png");
if(!bitmap_ally)
    ExitGame("Failed to load \"data/ally.png\"");

if(DEBUG) cout<<"\n  Loading \"data/player.png\"";
bitmap_player = al_load_bitmap("data/player.png");
if(!bitmap_player)
    ExitGame("Failed to load \"data/player.png\"");

if(DEBUG) cout<<"\n  Loading \"data/enemy.png\"";
bitmap_enemy = al_load_bitmap("data/enemy.png");
if(!bitmap_enemy)
    ExitGame("Failed to load \"data/enemy.png\"");

#endif // BITMAPS_H_INCLUDED
