#include "../main.h"

QList<Day*> Day::list;

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

Day* Day::pickUp(){
    int limit = Day::list.size();
    int id = Parameters::randomInt(0, limit);
    return Day::getById(id);
}

Day* Day::getById(int id){
    QList<Day*> list = Day::list ;
    for( int i = 0 ; i < list.size() ; i++){
        Day* day = list[i] ;
        if(day->getId() == id) return(day) ;
    }
    return(NULL) ;
}
