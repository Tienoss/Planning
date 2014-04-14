#ifndef DAY_H
#define DAY_H

#include "../main.h"

class Day
{
private:
    int id;
    string name;

public:
    Day();

    //Variables globales
    static vector<Day*> list;
    static string jsonList() ;

    //Methodes
    int getId();
    string getName();
    Day* setName(string name);
    string toJson() ;

};

#endif // DAY_H
