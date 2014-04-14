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
    static vector<Course*> list;

    //Methodes
    TimeSlot* getTimeslot();
    Course* setTimeslot(TimeSlot* timeSlot);


    Promotion* getPromotion();
    Course* setPromotion(Promotion* promotion);

    Room* getRoom();
    Course* setRoom(Room* room);

    Teacher* getTeacher();
    Course* setTeacher(Teacher* teacher);

    Promotion* getPromotion();
    void setPromotion(Promotion* value);

    Room* getRoom();
    void setRoom(Room* value);

    Teacher* getTeacher();
    void setTeacher(Teacher* value);

private:
    int id;
    Promotion* promotion;
    Room* room;
    TimeSlot* timeslot;
    Teacher* teacher;
};

#endif // COURSE_H
