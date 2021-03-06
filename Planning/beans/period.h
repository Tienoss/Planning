#ifndef PERIOD_H
#define PERIOD_H

#include "../main.h"

class Period : public QObject
{
private:
    int id;
    int from;
    int length;

public:
    Period();

    // Static
    static QList<Period*> list;
    static string jsonList() ;

    //Methodes
    int getId();
    int getFrom();
    Period* setFrom(int from);

    int getLength();
    Period* setLength(int length);

    string toString();

    string toJson() ;
};

#endif // PERIOD_H
