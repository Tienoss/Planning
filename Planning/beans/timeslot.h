#ifndef TIMESLOT_H
#define TIMESLOT_H

#include "../main.h"

class TimeSlot
{
public:
    TimeSlot();

    //Variables globales
    static vector<TimeSlot*> list;
    static string jsonList() ;

    //Methodes
    int getId() const;
    void setId(int value);

    Week* getWeek();
    void setWeek(Week* value);

    Day* getDay();
    void setDay(Day* value);

    Period* getPeriod();
    void setPeriod(Period* value);

    string toJson() ;

private:
    int id;
    Week* week;
    Day* day;
    Period* period;
};

#endif // TIMESLOT_H
