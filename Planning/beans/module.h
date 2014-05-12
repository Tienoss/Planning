#ifndef MODULE_H
#define MODULE_H

#include "../main.h"

class Module
{
private:
    int id;
    Promotion* promotion;
    Teacher* teacher;
    float duration;

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

    float getDuration();
    Module* setDuration(float duration) ;
    Module* decrementDuration(float duration);
};

#endif // MODULE_H
