#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Player {
    public:
    float x;
    float y;
    float speed;
    float CameraPosition[2];
    string name;
    string character;
    bool shot;
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
    float speed;
    string name;
    string target;

};
#endif // CLASSES_H_INCLUDED
