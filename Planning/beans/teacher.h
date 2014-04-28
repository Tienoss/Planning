#ifndef TEACHER_H
#define TEACHER_H

#include "../main.h"

class Teacher
{
private:
    int id;
    string name;

public:
    Teacher();

    //Variables globales
    static QVector<Teacher*> list;
    static string jsonList() ;

    //Methodes
    int getId();

    string getName();
    Teacher* setName(string name);

    string toJson() ;
};

#endif // TEACHER_H
