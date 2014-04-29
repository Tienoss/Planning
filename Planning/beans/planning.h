#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    int score;

public:
    Planning();

    //Variables globales
    static QList<Planning*> list;


    //Methodes
    int getId();
    Planning* setScore(int score);
    int getScore();

    Planning* fromRandom();
    Planning* from(Planning* planning);
    Planning* evaluate();
    Planning* makeChange();

};

#endif // PLANNING_H
