#include "../main.h"

Planning* Planning::best = new Planning();
Planning* Planning::test = new Planning();

// Instance
Planning::Planning(){

}

int Planning::getId(){return this->id;}

int Planning::getScore(){return this->score;}
Planning* Planning::setScore(int score){this->score = score; return this;}

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

Planning* Planning::initialiseHash(){
    for (int ts=0; ts < TimeSlot::list.size(); ts++){
        for(int p=0; p < Promotion::list.size(); p++)
            this->courses[Promotion::list[p]][TimeSlot::list[ts]] = NULL;

        for(int r=0; r < Room::list.size(); r++)
            this->courses[Room::list[r]][TimeSlot::list[ts]] = NULL;

        for(int t=0; t < Teacher::list.size(); t++)
            this->courses[Teacher::list[t]][TimeSlot::list[ts]] = NULL;
    }
    return(this);
}

void Planning::planCourse(Course* course){
    this->courses[course->getTeacher()][course->getTimeslot()] = course;
    this->courses[course->getPromotion()][course->getTimeslot()] = course;
    this->courses[course->getRoom()][course->getTimeslot()] = course;
}

bool Planning::courseIsPlannable(Course* course){
    if(course->getTeacher() == NULL) return false;
    if(course->getPromotion() == NULL) return false;
    if(course->getRoom() == NULL) return false;
    if(course->getTimeslot() == NULL) return false;

    if(this->courses[course->getTeacher()][course->getTimeslot()] != NULL) return false;
    if(this->courses[course->getPromotion()][course->getTimeslot()] != NULL) return false;
    if(this->courses[course->getRoom()][course->getTimeslot()] != NULL) return false;
    return true;
}


