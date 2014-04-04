#ifndef WEEK_H
#define WEEK_H

#include "main.h"

class Week
{
public:
    Week();

    //Variables globales
    static vector<Week*> list;

    //Methodes
    int getId() const;
    void setId(int value);

    int getName() const;
    void setName(int value);

private:
    int id;
    int name;
};

#endif // WEEK_H
