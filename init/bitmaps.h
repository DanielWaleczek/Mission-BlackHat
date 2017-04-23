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

if(DEBUG) cout<<"\n  Loading \"data/terrain/Grass1.png\"";
bitmap_terrain_grass01 = al_load_bitmap("data/terrain/Grass1.png");
if(!bitmap_terrain_grass01)
    ExitGame("Failed to load \"data/terrain/Grass1.png\"");

if(DEBUG) cout<<"\n  Loading \"data/terrain/Pavement.png\"";
bitmap_terrain_path01 = al_load_bitmap("data/terrain/Pavement.png");
if(!bitmap_terrain_path01)
    ExitGame("Failed to load \"data/Pavement.png\"");

if(DEBUG) cout<<"\n  Loading \"data/terrain/water.png\"";
bitmap_terrain_water01 = al_load_bitmap("data/terrain/water.png");
if(!bitmap_terrain_water01)
    ExitGame("Failed to load \"data/water.png\"");

#endif // BITMAPS_H_INCLUDED
