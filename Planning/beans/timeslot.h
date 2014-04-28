#ifndef TIMESLOT_H
#define TIMESLOT_H

#include "../main.h"

class TimeSlot
{

private:
    int id;
    Week* week;
    Day* day;
    Period* period;

public:
    TimeSlot();

    //Variables globales
    static vector<TimeSlot*> list;
    static string jsonList() ;

    //Methodes
    int getId() ;

    Week* getWeek();
    TimeSlot* setWeek(Week* week);

    Day* getDay();
    TimeSlot* setDay(Day* day);

    Period* getPeriod();
    TimeSlot* setPeriod(Period* period);

    string toJson() ;


};

#endif // TIMESLOT_H
