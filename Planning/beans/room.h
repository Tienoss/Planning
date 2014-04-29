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
    static QVector<Room*> list;
    static string jsonList() ;
    static Room* pickUp();
    static Room* getById(int id);

    //Methodes
    int getId();
    string getName();
    Room* setName(string name);
    string toJson() ;
};

#endif // ROOM_H
