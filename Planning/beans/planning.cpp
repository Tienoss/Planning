#include "../main.h"

vector<Planning*> Planning::list;

Planning::Planning()
{
    this->id = list.size();
}

int Planning::getId() const
{
    return id;
}

void Planning::setId(int value)
{
    id = value;
}
int Planning::getScore() const
{
    return score;
}

void Planning::setScore(int value)
{
    score = value;
}


