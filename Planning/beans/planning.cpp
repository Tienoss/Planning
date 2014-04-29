#include "../main.h"


// Static
QList<Planning*> Planning::list;

// Instance
Planning::Planning(){

}

int Planning::getId(){return this->id;}

int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}

