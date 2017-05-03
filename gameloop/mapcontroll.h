#ifndef MAPCONTROLL_H_INCLUDED
#define MAPCONTROLL_H_INCLUDED

void drawmap(Player *TempPlayer, character *TempCharacter, short int lavaframe)
{
    for(short int x=0; x<100; x++)
    {
        for(short int y=0; y<100; y++)
        {
            if(x*64-64<TempPlayer->x+ScreenWidth/2&& x*64+64>TempPlayer->x-ScreenWidth/2&& y*64-64<=TempPlayer->y+ScreenHeight/2 && y*64+64>=TempPlayer->y-ScreenHeight/2)

            switch(Map[y][x])
            {
            case 1:
                al_draw_bitmap(bitmap_terrain_path01, x*BlockSize, y*BlockSize, 0);
                break;
            case 2:
                al_draw_bitmap(bitmap_terrain_lavaland, x*BlockSize, y*BlockSize, 0);
                break;
            case 3:
                #include "collisions.h"
                al_draw_scaled_bitmap(bitmap_terrain_lava[lavaframe], 0, 0, 32, 32, x*BlockSize, y*BlockSize, 64, 64, 0);
                //al_draw_bitmap(bitmap_terrain_water01, x*BlockSize, y*BlockSize, 0);
                break;
            case 4:
                al_draw_bitmap(bitmap_terrain_path01, x*BlockSize, y*BlockSize, 0);
                break;
            default:
                //#include "collisions.h"
                //al_draw_filled_rectangle(x*BlockSize, y*BlockSize, x*BlockSize+BlockSize, y *BlockSize+BlockSize, rgbBlack);
                break;
            }
        }
    }
}

void mapcontroll()
{
//    int loadCounterX=0, loadCounterY=0;
//
//    std::ifstream mapfile(mapname);
//    if(mapfile.is_open())
//    {
//        mapfile >> mapSizeX >> mapSizeY;
//        while(!mapfile.eof())
//        {
//            mapfile >>tempmap[loadCounterX][loadCounterY];
//            loadCounterX++;
//            if(loadCounterX>=mapSizeX)
//            {
//                loadCounterX=0;
//                loadCounterY++;
//            }
//        }
//    }
//    else
//        ExitGame("Failed to load map!");
}

#endif // MAPCONTROLL_H_INCLUDED
