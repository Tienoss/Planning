#include "main.h"

SuperClass::SuperClass()
{
}

SuperClass* SuperClass::addUnavailability(QObject* object){
    this->listUnavailableObjects.insert(object);
    return(this);
}

bool SuperClass::isAvailable(QObject* object){
    if(this->listUnavailableObjects.contains(object)) return(false);

    TimeSlot* timeslot = dynamic_cast<TimeSlot*>(object);
    if(timeslot != 0) {
        if(this->listUnavailableObjects.contains(timeslot->getWeek())) return(false);
        if(this->listUnavailableObjects.contains(timeslot->getDay())) return(false);
        if(this->listUnavailableObjects.contains(timeslot->getPeriod())) return(false);
    }

    return true;
}
