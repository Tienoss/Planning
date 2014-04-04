#include "../main.h"

vector<Room*> Room::list;

Room::Room()
{
    this->id = list.size();
}
int Room::getId(){ return(this->id); }
string Room::getName(){ return(this->name); }
void Room::setName(string name){}
