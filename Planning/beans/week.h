#ifndef WEEK_H
#define WEEK_H

#include "../main.h"

class Week
{
private:
    int id;
    string name;

public:
    Week();

    //Variables globales
    static vector<Week*> list;
    static string jsonList() ;

    //Methodes
    int getId();

    string getName();
    Week* setName(string name);

    string toJson() ;
};

#endif // WEEK_H
