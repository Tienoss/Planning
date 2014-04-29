#ifndef MODULE_H
#define MODULE_H

#include "../main.h"

class Module
{
private:
    int id;
    Promotion* promotion;
    Teacher* teacher;
    float numberHours;

public:
    Module();

    //Variables globales
    static QVector<Module*> list;

    //Methodes
    int getId();

    Promotion* getPromotion();
    Module* setPromotion(Promotion* promotion);

    Teacher* getTeacher();
    Module* setTeacher(Teacher* teacher);

    float getNumberHours();
};

#endif // MODULE_H
