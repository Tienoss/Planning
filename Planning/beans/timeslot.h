#ifndef TIMESLOT_H
#define TIMESLOT_H

#include "../main.h"

class TimeSlot
{
public:
    TimeSlot();

    //Variables globales
    static vector<TimeSlot*> list;

    //Methodes
    int getId() const;
    void setId(int value);

    Week getWeek() const;
    void setWeek(const Week &value);

    Day getDay() const;
    void setDay(const Day &value);

    Period getPeriod() const;
    void setPeriod(const Period &value);

private:
    int id;
    Week week;
    Day day;
    Period period;
};

#endif // TIMESLOT_H
