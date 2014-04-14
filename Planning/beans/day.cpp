#include "../main.h"

vector<Day*> Day::list;

Day::Day()
{
    this->id = list.size();
    Day::list.push_back(this);
}
int Day::getId(){return this->id;}
string Day::getName(){return this->name;}
Day* Day::setName(string name){this->name = name; return this;}

string Day::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Room::list.size() ; i++)
        ret << ((i>0)?",":"") << Room::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Day::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:\"" << this->getName() << "\"" ;
    ret << "}" ; return(ret.str()) ;
}

