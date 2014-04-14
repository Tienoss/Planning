#include "../main.h"

vector<Day*> Day::list;

Day::Day()
{
    this->id = list.size();
    Day::list.push_back(this);
}

int Day::getId() const
{
    return id;
}

void Day::setId(int value)
{
    id = value;
}

string Day::getName()
{
    return name;
}

Day* Day::setName(string value)
{
    name = value; return(this) ;
}

string Day::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Day::list.size() ; i++)
        ret << ((i>0)?",":"") << Day::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Day::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:\"" << this->getName() << "\"" ;
    ret << "}" ; return(ret.str()) ;
}


