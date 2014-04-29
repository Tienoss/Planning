#include "../main.h"

QList<Week*> Week::list;

Week::Week()
{
    this->id = list.size();
    Week::list.push_back(this);
}

int Week::getId(){ return this->id;}

string Week::getName(){ return this->name;}

Week* Week::setName(string name){this->name = name; return this;}

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



