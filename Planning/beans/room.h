#ifndef ROOM_H
#define ROOM_H

#include "../main.h"

class Room
{
private:
    int id;
    string name;

public:
    Room();

    //Variables globales
    static vector<Room*> list;

    //Methodes
    int getId();
    string getName();
    void setName(string name);
};

#endif // ROOM_H
