#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    int score;
    QList<Course*> listCourse;

public:
    Planning();

    //Variables globales
    static Planning* best;
    static Planning* test;

    QHash<QObject*, QHash<TimeSlot*, Course*> > courses;

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
    Planning* initialiseHash();
    void planCourse(Course* course);
    bool courseIsPlannable(Course* course);
};

#endif // PLANNING_H
