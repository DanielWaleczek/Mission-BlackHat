#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Player {
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
};

class character {
    public:
    float x;
    float y;
    float speed;
    string name;
    string character;
    bool enemy;
    bool following;
};

class bullet {
public:
    float x;
    float y;
    float speed=0.0;
    float tx;
    float ty;
    string name;

};
#endif // CLASSES_H_INCLUDED
