#include "../main.h"

vector<TimeSlot*> TimeSlot::list;

TimeSlot::TimeSlot()
{
    this->id = list.size();
    TimeSlot.list.push_back(this);
}

int TimeSlot::getId() const
{
    return id;
}

void TimeSlot::setId(int value)
{
    id = value;
}
Week TimeSlot::getWeek() const
{
    return week;
}

void TimeSlot::setWeek(const Week &value)
{
    week = value;
}
Day TimeSlot::getDay() const
{
    return day;
}

void TimeSlot::setDay(const Day &value)
{
    day = value;
}
Period TimeSlot::getPeriod() const
{
    return period;
}

void TimeSlot::setPeriod(const Period &value)
{
    period = value;
}




