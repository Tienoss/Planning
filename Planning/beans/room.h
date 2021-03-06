#ifndef ROOM_H
#define ROOM_H

#include "../main.h"

class Room : public SuperClass
{
private:
    int id;
    string name;

public:
    Room();

    //Variables globales
    static QList<Room*> list;
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
