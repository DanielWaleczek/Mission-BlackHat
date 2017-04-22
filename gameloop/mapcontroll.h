#ifndef MAPCONTROLL_H_INCLUDED
#define MAPCONTROLL_H_INCLUDED

void drawmap()
{
//    for(int i=0; i<mapSizeX; i++)
//    {
//        for(int j=0; j<mapSizeY; j++)
//        {
//            if(tempmap[i][j]==0)
//                al_draw_filled_rectangle(i*TileSize, j*TileSize, i*(TileSize*2), i*(TileSize*2), rgbGray);
//            else if(tempmap[i][j]==1)
//                al_draw_filled_rectangle(i*TileSize, j*TileSize, i*(TileSize*2), i*(TileSize*2), rgbWhite);
//            else if(tempmap[i][j]==65)
//                al_draw_filled_rectangle(i*TileSize, j*TileSize, i*(TileSize*2), i*(TileSize*2), rgbRed);
//            else
//                al_draw_filled_rectangle(i*TileSize, j*TileSize, i*(TileSize*2), i*(TileSize*2), rgbBlack);
//        }
//    }
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
