#include "../main.h"

vector<Period*> Period::list;

Period::Period()
{
    this->id = list.size();
    Period::list.push_back(this);
}
int Period::getId(){return this->id;}

int Period::getFrom(){return this->from;}
Period* Period::setFrom(int from){this->from = from; return this;}

int Period::getLength(){return this->length;}
Period* Period::setLength(int length){this->length = length; return this;}

string Period::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Period::list.size() ; i++)
        ret << ((i>0)?",":"") << Period::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Period::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "from:" << this->getFrom() << "," ;
    ret << "length:" << this->getLength() ;
    ret << "}" ; return(ret.str()) ;
}






