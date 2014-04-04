#include "../main.h"

vector<Week*> Week::list;

Week::Week()
{
    this->id = list.size();
}

int Week::getId() const
{
    return id;
}

void Week::setId(int value)
{
    id = value;
}

int Week::getName() const
{
    return name;
}

void Week::setName(int value)
{
    name = value;
}


