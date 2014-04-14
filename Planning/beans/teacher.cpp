#include "../main.h"

vector<Teacher*> Teacher::list;

Teacher::Teacher()
{
    this->id = list.size();
    Teacher::list.push_back(this);
}
int Teacher::getId(){ return(this->id); }
string Teacher::getName(){ return(this->name); }
void Teacher::setName(string name){}
