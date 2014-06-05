#ifndef PLANNING_H
#define PLANNING_H

#include "../main.h"

class Planning
{
private:
    int id;
    float score;

public:
    Planning();

    //Variables globales
    static Planning* best;
    static Planning* test;

    QHash<SuperClass*, QHash<TimeSlot*, Course*> > courses;

    //Methodes
    int getId();
    Planning* setScore(float score);
    float getScore();
    Planning* fromRandom();
    Planning* from(Planning* planning);
    Planning* evaluate();
    Planning* makeChange();
    Planning* initialiseHash();
    Planning* planCourse(Course* course);
    Planning* unplanCourse(Course* course);
    Planning* log();

    bool courseIsPlannable(Course* course);
    TimeSlot* getFreeTimeSlot(SuperClass* q1);
    TimeSlot* getFreeTimeSlot(SuperClass* q1, SuperClass* q2);
    TimeSlot* getFreeTimeSlot(SuperClass* q1, SuperClass* q2, SuperClass* q3);
    Room* getFreeRoom(TimeSlot* timeslot);

    Course* pickUpExistingCourse() ;

    string jsonListOfCourses() ;

};

#endif // PLANNING_H
