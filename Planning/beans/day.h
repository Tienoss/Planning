#ifndef DAY_H
#define DAY_H

#include "../main.h"

class Day
{
private:
    int id;
    int name;

public:
    Day();

    //Variables globales
    static vector<Day*> list;

    //Methodes
    String getName();
    Day* setName(String name);

};

#endif // DAY_H
