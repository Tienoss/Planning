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

    int evaluate();

};

#endif // PLANNING_H
