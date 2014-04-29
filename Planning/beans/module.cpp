#include "../main.h"

QVector<Module*> Module::list;

Module::Module()
{
    this->id = list.size();
    this->numberHours = 20;
    Module::list.push_back(this);
}

int Module::getId(){return this->id;}

Promotion* Module::getPromotion(){return this->promotion;}
Module* Module::setPromotion(Promotion* promotion){this->promotion = promotion; return this;}

Teacher* Module::getTeacher(){return this->teacher;}
Module* Module::setTeacher(Teacher* teacher){this->teacher = teacher; return this;}

float Module::getNumberHours(){return this->numberHours;}
