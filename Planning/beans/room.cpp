#include "../main.h"

vector<Room*> Room::list;

Room::Room()
{
    this->id = list.size();
    Room::list.push_back(this);
}
int Room::getId(){ return(this->id); }
string Room::getName(){ return(this->name); }
Room* Room::setName(string name){this->name = name ; return(this) ;}


string Room::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Room::list.size() ; i++)
        ret << ((i>0)?",":"") << Room::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Room::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:\"" << this->getName() << "\"" ;
    ret << "}" ; return(ret.str()) ;
}

