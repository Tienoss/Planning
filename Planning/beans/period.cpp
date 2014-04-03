#include "period.h"

period::period()
{
}
int period::getId() const
{
    return id;
}

void period::setId(int value)
{
    id = value;
}

int period::getId() const
{
    return id;
}

void period::setId(int value)
{
    id = value;
}
int period::getFrom() const
{
    return from;
}

void period::setFrom(int value)
{
    from = value;
}
int period::getLength() const
{
    return length;
}

void period::setLength(int value)
{
    length = value;
}


string period::getName() const
{
    return name;
}

void period::setName(const string &value)
{
    name = value;
}


