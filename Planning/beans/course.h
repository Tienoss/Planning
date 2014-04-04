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
    TimeSlot getTimeslot() const;
    void setTimeslot(const TimeSlot &value);

    int getId() const;
    void setId(int value);

    Promotion getPromo() const;
    void setPromo(const Promotion &value);

    Room getRoom() const;
    void setRoom(const Room &value);

    Teacher getTeacher() const;
    void setTeacher(const Teacher &value);

private:
    int id;
    Promotion promo;
    Teacher teacher;
    Room room;
    TimeSlot timeslot;
};

#endif // COURSE_H
