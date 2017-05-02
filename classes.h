#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Player
{
public:
    float x;
    float y;
    float angle;
    double speed;
    float CameraPosition[2];
    string name;
    string character;
    bool shot;
    float playermodelWidth;
    float playermodelHeight;
    short int HP;

    //!Gun
    string GunName;
    short int GunMagMaxAmmo;
    short int GunMagAmmo;
    short int GunAmmo;

};

class character
{
public:
    float x;
    float y;
    float speed;
    string name;
    string character;
    bool enemy;
    bool following;
};

class bullet
{
public:
    float x;
    float y;
    float speed=0.0;
    float tx;
    float ty;
    string name;

};

class mmap
{
public:
    short int id;
    short int mapWidth;
    short int mapHeight;
    short int tileWidth=64;
    short int tileHeight=64;

    ALLEGRO_BITMAP *TileBitmap[1000];
    string TileSource[1000];//sourcep[number]
    short int Map[1000][1000];//number[x][y]
};
#endif // CLASSES_H_INCLUDED
