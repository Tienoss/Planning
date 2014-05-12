#include "../main.h"

QList<Course*> Course::list;

Course::Course()
{
    this->id = list.size();
    Course::list.push_back(this);
}
int Course::getId(){return this->id;}

TimeSlot* Course::getTimeslot(){return this->timeslot;}
Course* Course::setTimeslot(TimeSlot* timeslot){this->timeslot = timeslot; return this;}

Promotion* Course::getPromotion(){return this->promotion;}
Course* Course::setPromotion(Promotion* promotion){this->promotion = promotion; return this;}

Room* Course::getRoom(){return this->room;}
Course* Course::setRoom(Room* room){this->room = room; return this;}

Teacher* Course::getTeacher(){return this->teacher;}
Course* Course::setTeacher(Teacher* teacher){this->teacher = teacher; return this;}

Course* Course::log(){
    cout << "Room : " + this->getRoom()->getName() << endl;
    cout << "Promo : " + this->getPromotion()->getName() << endl;
    cout << "Prof : " + this->getTeacher()->getName() << endl;
    cout << "TimeSlot : " + this->getTimeslot()->toString() << endl;
    return this;
}
