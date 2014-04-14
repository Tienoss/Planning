#include "../main.h"

vector<Planning*> Planning::list;

Planning::Planning()
{
}
int Planning::getId(){return this->id;}
int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}
static Planning getInstance(){return this->instance;}
