#ifndef DAY_H
#define DAY_H

#include "../main.h"

class Day
{
public:
    Day();

    //Variables globales
    static vector<Day*> list;

    //Methodes
    int getId() const;
    void setId(int value);

    int getName() const;
    void setName(int value);

private:
    int id;
    int name;
};

#endif // DAY_H
