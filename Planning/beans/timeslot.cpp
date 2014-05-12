#include "../main.h"

// Static
QList<TimeSlot*> TimeSlot::list;
void TimeSlot::generate(){
    for(int w = 0 ; w < Week::list.size() ; w++){
        for(int d = 0 ; d < Day::list.size() ; d++){
            for(int p = 0 ; p < Period::list.size() ; p++){
                (new TimeSlot())
                    ->setWeek(Week::list[w])
                    ->setDay(Day::list[d])
                    ->setPeriod(Period::list[p])
                ;
            }
        }
    }
}

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

TimeSlot* TimeSlot::pickUp(){
    int limit = TimeSlot::list.size();
    int id = Parameters::randomInt(0, limit);
    return TimeSlot::getById(id);
}

TimeSlot* TimeSlot::getById(int id){
    QList<TimeSlot*> list = TimeSlot::list ;
    for( int i = 0 ; i < list.size() ; i++){
        TimeSlot* timeslot = list[i] ;
        if(timeslot->getId() == id) return(timeslot) ;
    }
    return(NULL) ;
}

string TimeSlot::toString(){
    return this->getWeek()->getName() +
            " " + this->getDay()->getName() +
            " " + this->getPeriod()->toString();
}

