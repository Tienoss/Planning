#include "../main.h"

vector<Week*> Week::list;

Week::Week()
{
    this->id = list.size();
    Week::list.push_back(this);
}

int Week::getId() const
{
    return id;
}

void Week::setId(int value)
{
    id = value;
}

int Week::getName() const
{
    return name;
}

void Week::setName(int value)
{
    name = value;
}

string Week::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Week::list.size() ; i++)
        ret << ((i>0)?",":"") << Week::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Week::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:" << this->getName() ;
    ret << "}" ; return(ret.str()) ;
}



