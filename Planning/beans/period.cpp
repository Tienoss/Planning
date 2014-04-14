#include "../main.h"

vector<Period*> Period::list;

Period::Period()
{
    this->id = list.size();
    Period::list.push_back(this);
}

int Period::getId() const
{
    return id;
}

void Period::setId(int value)
{
    id = value;
}

int Period::getFrom() const
{
    return from;
}

void Period::setFrom(int value)
{
    from = value;
}
int Period::getLength() const
{
    return length;
}

void Period::setLength(int value)
{
    length = value;
}


string Period::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Period::list.size() ; i++)
        ret << Period::list[i]->toJson() << "," ;
    ret << "]" ; return(ret.str()) ;
}

string Period::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "from:" << this->getFrom() << "," ;
    ret << "length:" << this->getLength() << "," ;
    ret << "}" ; return(ret.str()) ;
}






