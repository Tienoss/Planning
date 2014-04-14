#include "../main.h"

vector<Promotion*> Promotion::list;



Promotion::Promotion()
{
    this->id = list.size();
    Promotion::list.push_back(this);
}
int Promotion::getId(){ return(this->id); }
string Promotion::getName(){ return(this->name); }
void Promotion::setName(string name){}




string Promotion::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:\"" << this->getName() << "\"" ;
    ret << "}" ; return(ret.str()) ;
}

string Promotion::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Promotion::list.size() ; i++)
        ret << Promotion::list[i]->toJson() << "," ;
    ret << "]" ; return(ret.str()) ;
}
