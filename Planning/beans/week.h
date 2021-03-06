#ifndef WEEK_H
#define WEEK_H

#include "../main.h"

class Week : public QObject
{
private:
    int id;
    string name;

public:
    Week();

    //Variables globales
    static QList<Week*> list;
    static string jsonList() ;
    static Week* pickUp();
    static Week* getById(int id);

    //Methodes
    int getId();

    string getName();
    Week* setName(string name);

    string toJson() ;
};

#endif // WEEK_H
