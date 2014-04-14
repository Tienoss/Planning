#include "../main.h"

vector<Course*> Course::list;

Course::Course()
{
    this->id = list.size();
    Course.list.push_back(this);
}

int Course::getId() const
{
    return id;
}

void Course::setId(int value)
{
    id = value;
}

Promotion* Course::getPromotion()
{
    return promotion;
}

void Course::setPromotion(Promotion* value)
{
    promotion = value;
}

Room* Course::getRoom()
{
    return room;
}

void Course::setRoom(Room* value)
{
    room = value;
}

TimeSlot* Course::getTimeslot()
{
    return timeslot;
}

void Course::setTimeslot(TimeSlot* value)
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
