#include "../main.h"

vector<TimeSlot*> TimeSlot::list;

TimeSlot::TimeSlot()
{
    this->id = list.size();
    TimeSlot::list.push_back(this);
}

int TimeSlot::getId(){ return id ; }

Week* TimeSlot::getWeek(){ return this->week; }
TimeSlot* TimeSlot::setWeek(Week* week){ this->week = week; return(this) ; }

Day* TimeSlot::getDay(){ return this->day; }
TimeSlot* TimeSlot::setDay(Day* day){ this->day = day; return(this) ; }

Period* TimeSlot::getPeriod(){ return this->period; }
TimeSlot* TimeSlot::setPeriod(Period* period){ this->period = period; return(this) ; }


string TimeSlot::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < TimeSlot::list.size() ; i++)
        ret << ((i>0)?",":"") << TimeSlot::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string TimeSlot::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "week:" << this->getWeek()->getId() << "," ;
    ret << "day:" << this->getDay()->getId() << "," ;
    ret << "period:" << this->getPeriod()->getId() ;
    ret << "}" ; return(ret.str()) ;
}




