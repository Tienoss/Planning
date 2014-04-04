#include "../main.h"

vector<Promotion*> Promotion::list;

Promotion::Promotion()
{
    this->id = list.size();
}
int Promotion::getId(){ return(this->id); }
string Promotion::getName(){ return(this->name); }
void Promotion::setName(string name){}
