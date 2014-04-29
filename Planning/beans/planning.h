#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    int score;
    QList<Course*> listCourse;
    static Planning* instance ;

public:
    Planning();

    //Variables globales
    static QList<Planning*> list;
    static Planning* getInstance() ;

    //Methodes
    int getId();
    Planning* setScore(int score);
    int getScore();
    QList<Course*> getListCourse();
    Planning* setListCourse(QList<Course*> listCourse);
    Planning* fromRandom();
    Planning* from(Planning* planning);
    Planning* evaluate();
    Planning* makeChange();
};

#endif // PLANNING_H
