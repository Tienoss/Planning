#ifndef DAY_H
#define DAY_H

#include "../main.h"

class Day
{
public:
    Day();

    //Variables globales
    static vector<Day*> list;
    static string jsonList() ;

    //Methodes
    int getId() const;
    void setId(int value);

    string getName() ;
    Day* setName(string value);

    string toJson() ;

private:
    int id;
    string name;
};

#endif // DAY_H
