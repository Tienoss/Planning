#include "../main.h"

vector<Promotion*> Promotion::list;

Promotion::Promotion()
{
    this->id = list.size();
    Promotion.list.push_back(this);
}
int Promotion::getId(){ return(this->id); }
string Promotion::getName(){ return(this->name); }
void Promotion::setName(string name){}
