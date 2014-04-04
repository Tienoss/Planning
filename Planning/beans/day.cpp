#include "../main.h"

vector<Day*> Day::list;

Day::Day()
{
    this->id = list.size();
}

int Day::getId() const
{
    return id;
}

void Day::setId(int value)
{
    id = value;
}
int Day::getName() const
{
    return name;
}

void Day::setName(int value)
{
    name = value;
}


