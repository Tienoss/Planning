#ifndef TEACHER_H
#define TEACHER_H

#include "../main.h"

class Teacher : public SuperClass
{
private:
    int id;
    string name;

public:
    Teacher();

    //Variables globales
    static QList<Teacher*> list;
    static string jsonList() ;
    static Teacher* pickUp();
    static Teacher* getById(int id);

    //Methodes
    int getId();

    string getName();
    Teacher* setName(string name);

    string toJson() ;
};

#endif // TEACHER_H
