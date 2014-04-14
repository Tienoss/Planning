#ifndef COURSE_H
#define COURSE_H

#include "../main.h"

class Course
{
public:
    Course();

    //Variables globales
    static vector<Course*> list;

    //Methodes
    TimeSlot* getTimeslot();
    void setTimeslot(TimeSlot* value);

    int getId() const;
    void setId(int value);

    Promotion* getPromotion();
    void setPromotion(Promotion* value);

    Room* getRoom();
    void setRoom(Room* value);

private:
    int id;
    Promotion* promotion;
    Room* room;
    TimeSlot* timeslot;
};

#endif // COURSE_H
