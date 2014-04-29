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
    static QList<Promotion*> list;
    static string jsonList() ;

    //Methodes
    int getId();
    string getName();
    Promotion* setName(string name);
    string toJson() ;
};

#endif // PROMOTION_H
