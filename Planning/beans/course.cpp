#include "../main.h"

vector<Course*> Course::list;

Course::Course()
{
    this->id = list.size();
}

int Course::getId() const
{
    return id;
}

void Course::setId(int value)
{
    id = value;
}

Promotion Course::getPromo() const
{
    return promo;
}

void Course::setPromo(const Promotion &value)
{
    promo = value;
}

Room Course::getRoom() const
{
    return room;
}

void Course::setRoom(const Room &value)
{
    room = value;
}

TimeSlot Course::getTimeSlot() const
{
    return timeslot;
}

void Course::setTimeSlot(const TimeSlot &value)
{
    timeslot = value;
}

Teacher Course::getTeacher() const
{
    return teacher;
}

void Course::setTeacher(const Teacher &value)
{
    teacher = value;
}
