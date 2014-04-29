#include "../main.h"

QList<Room*> Room::list;

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

Room* Room::pickUp(){
    int limit = Room::list.size();
    int id = Parameters::randomInt(0, limit);
    return Room::getById(id);
}

Room* Room::getById(int id){
    QVector<Room*> list = Room::list ;
    for( int i = 0 ; i < list.size() ; i++){
        Room* room = list[i] ;
        if(room->getId() == id) return(room) ;
    }
    return(NULL) ;
}
