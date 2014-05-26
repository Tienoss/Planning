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
    static Planning* best;
    static Planning* test;

    QHash<QObject*, QHash<TimeSlot*, Course*> > courses;

    //Methodes
    int getId();
    Planning* setScore(int score);
    int getScore();
    Planning* fromRandom();
    Planning* from(Planning* planning);
    Planning* evaluate();
    Planning* makeChange();
    Planning* initialiseHash();
    Planning* planCourse(Course* course);
    Planning* unplanCourse(Course* course);
    Planning* log();

    bool courseIsPlannable(Course* course);
    TimeSlot* getFreeTimeSlot(QObject* q1);
    TimeSlot* getFreeTimeSlot(QObject* q1, QObject* q2);
    TimeSlot* getFreeTimeSlot(QObject* q1, QObject* q2, QObject* q3);
    Room* getFreeRoom(TimeSlot* timeslot);

    Course* pickUpExistingCourse() ;

};

#endif // PLANNING_H
