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
    bool active=0;
    float x;
    float y;
    float speed=15;
    float tx;
    float ty;
    float mx;//x1-x2
    float my;//y1-y2
    float sx;//source x
    float sy;//source y
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
