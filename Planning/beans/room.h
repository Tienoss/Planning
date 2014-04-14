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
    static string jsonList() ;

    //Methodes
    int getId();
    string getName();
    Room* setName(string name);
    string toJson() ;
};

#endif // ROOM_H
