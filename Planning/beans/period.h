#ifndef PERIOD_H
#define PERIOD_H

#include "../main.h"

class Period
{
public:
    Period();

    // Static
    static vector<Period*> list;
    static string jsonList() ;

    //Methodes
    int getId() const;
    void setId(int value);

    int getFrom() const;
    void setFrom(int value);

    int getLength() const;
    void setLength(int value);

    string toJson() ;

private:
    int id;
    int from;
    int length;
};

#endif // PERIOD_H
