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
    static vector<Teacher*> list;

    //Methodes
    int getId();
    string getName();
    void setName(string name);
};

#endif // TEACHER_H
