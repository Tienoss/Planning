#include "main.h"

vector<Period*> Period::list;

Period::Period()
{
    this->id = list.size();
}

int Period::getId() const
{
    return id;
}

void Period::setId(int value)
{
    id = value;
}

int Period::getId() const
{
    return id;
}

void Period::setId(int value)
{
    id = value;
}
int Period::getFrom() const
{
    return from;
}

void Period::setFrom(int value)
{
    from = value;
}
int Period::getLength() const
{
    return length;
}

void Period::setLength(int value)
{
    length = value;
}


string Period::getName() const
{
    return name;
}

void Period::setName(const string &value)
{
    name = value;
}


