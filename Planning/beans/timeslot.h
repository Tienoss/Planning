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
    static QList<TimeSlot*> list;
    static string jsonList() ;
    static void generate() ;
    static TimeSlot* pickUp();
    static TimeSlot* getById(int id);

    //Methodes
    int getId() ;

    Week* getWeek();
    TimeSlot* setWeek(Week* week);

    Day* getDay();
    TimeSlot* setDay(Day* day);

    Period* getPeriod();
    TimeSlot* setPeriod(Period* period);

    string toString();

    string toJson() ;


};

#endif // TIMESLOT_H
