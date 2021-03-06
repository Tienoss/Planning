#ifndef DAY_H
#define DAY_H

#include "../main.h"

class Day : public QObject
{
private:
    int id;
    string name;

public:
    Day();

    //Variables globales
    static QList<Day*> list;
    static string jsonList() ;
    static Day* pickUp();
    static Day* getById(int id);

    //Methodes
    int getId();
    string getName();
    Day* setName(string name);
    string toJson() ;

};

#endif // DAY_H
