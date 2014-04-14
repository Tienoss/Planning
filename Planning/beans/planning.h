#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    int score;
    static Planning instance = new Planning();
public:
    Planning();

    //Variables globales
    static vector<Planning*> list;

    //Methodes
    int getId();
    Planning* setScore(int score);

    int evaluate();
};

#endif // PLANNING_H
