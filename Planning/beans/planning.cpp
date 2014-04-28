#include "../main.h"


// Static
QVector<Planning*> Planning::list;
Planning* Planning::instance = new Planning() ;
Planning* Planning::getInstance(){return Planning::instance;}

// Instance
Planning::Planning(){

}

int Planning::getId(){return this->id;}

int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}

