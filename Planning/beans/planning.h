#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    int score;
    static Planning* instance ;

public:
    Planning();

    //Variables globales
    static QVector<Planning*> list;
    static Planning* getInstance() ;

    //Methodes
    int getId();
    Planning* setScore(int score);
    int getScore();

    int evaluate();
};

#endif // PLANNING_H
