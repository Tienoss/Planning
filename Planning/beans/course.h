#ifndef COURSE_H
#define COURSE_H

#include "../main.h"

class Course
{
private:
    int id;
    Promotion* promotion;
    Teacher* teacher;
    Room* room;
    TimeSlot* timeslot;

public:
    Course();

    //Variables globales
    static QList<Course*> list;

    //Methodes
    int getId();

    TimeSlot* getTimeslot();
    Course* setTimeslot(TimeSlot* timeSlot);


    Promotion* getPromotion();
    Course* setPromotion(Promotion* promotion);

    Room* getRoom();
    Course* setRoom(Room* room);

    Teacher* getTeacher();
    Course* setTeacher(Teacher* teacher);

    Course* log();
};

#endif // COURSE_H
