#include "../main.h"

QList<Teacher*> Teacher::list;

Teacher::Teacher()
{
    this->id = list.size();
    Teacher::list.push_back(this);
}
int Teacher::getId(){ return(this->id); }
string Teacher::getName(){ return(this->name); }
Teacher* Teacher::setName(string name){this->name = name; return this; }

string Teacher::jsonList(){
    stringstream ret ; ret << "[" ;
    for(int i = 0 ; i < Teacher::list.size() ; i++)
        ret << ((i>0)?",":"") << Teacher::list[i]->toJson() ;
    ret << "]" ; return(ret.str()) ;
}

string Teacher::toJson(){
    stringstream ret ; ret << "{" ;
    ret << "id:" << this->getId() << "," ;
    ret << "name:\"" << this->getName() << "\"" ;
    ret << "}" ; return(ret.str()) ;
}

Teacher* Teacher::pickUp(){
    int limit = Teacher::list.size();
    int id = Parameters::randomInt(0, limit);
    return Teacher::getById(id);
}

Teacher* Teacher::getById(int id){
    QVector<Teacher*> list = Teacher::list ;
    for( int i = 0 ; i < list.size() ; i++){
        Teacher* teacher = list[i] ;
        if(teacher->getId() == id) return(teacher) ;
    }
    return(NULL) ;
}
