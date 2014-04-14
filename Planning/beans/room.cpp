#include "../main.h"

vector<Room*> Room::list;

Room::Room()
{
    this->id = list.size();
    Room::list.push_back(this);
}
int Room::getId(){ return(this->id); }
string Room::getName(){ return(this->name); }
void Room::setName(string name){}
