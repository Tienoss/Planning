#include "../main.h"


// Static
QList<Planning*> Planning::list;
Planning* Planning::instance = new Planning() ;
Planning* Planning::getInstance(){return Planning::instance;}

// Instance
Planning::Planning(){

}

int Planning::getId(){return this->id;}

int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}

QList<Course*> Planning::getListCourse(){
    return this->listCourse;
}
Planning* Planning::setListCourse(QList<Course*> listCourse){this->listCourse = listCourse; return (this);
}

Planning* Planning::fromRandom(){
    return(this);
}

Planning* Planning::from(Planning* planning){
    return(this);
}

Planning* Planning::evaluate(){
    return(this);
}

Planning* Planning::makeChange(){
    return(this);
}
