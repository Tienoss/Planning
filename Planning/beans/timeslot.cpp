#include "../main.h"

vector<TimeSlot*> TimeSlot::list;

TimeSlot::TimeSlot()
{
    this->id = list.size();
    TimeSlot::list.push_back(this);
}

int TimeSlot::getId() const
{
    return id;
}

void TimeSlot::setId(int value)
{
    id = value;
}
Week* TimeSlot::getWeek()
{
    return week;
}

void TimeSlot::setWeek(Week* value)
{
    week = value;
}

Day* TimeSlot::getDay()
{
    return day;
}

void TimeSlot::setDay(Day* value)
{
    day = value;
}
Period* TimeSlot::getPeriod()
{
    return period;
}

void TimeSlot::setPeriod(Period* value)
{
    period = value;
}

string TimeSlot::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Teacher::list.size() ; i++)
        ret << ((i>0)?",":"") << Teacher::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string TimeSlot::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "week:" << this->getWeek()->getId() << "," ;
    ret << "day:" << this->getDay()->getId() << "," ;
    ret << "week:" << this->getPeriod()->getId() ;
    ret << "}" ; return(ret.str()) ;
}




