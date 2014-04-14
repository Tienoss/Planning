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
};

#endif // COURSE_H
