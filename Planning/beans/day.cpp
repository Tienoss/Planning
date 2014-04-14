#include "../main.h"

vector<Day*> Day::list;

Day::Day()
{
    this->id = list.size();
    Day::list.push_back(this);
}
String Day::getName(){return this->name;}
Day* Day::setName(String name){this->name = name; return this;}
