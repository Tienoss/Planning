#ifndef PROMOTION_H
#define PROMOTION_H

#include "../main.h"

class Promotion
{
private:
    int id;
    string name;

public:
    Promotion();

    //Variables globales
    static vector<Promotion*> list;

    //Methodes
    int getId();
    string getName();
    void setName(string name);
};

#endif // PROMOTION_H
