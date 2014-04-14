#include "../main.h"

Export* Export::instance = new Export() ;

Export::Export(){}

Export* Export::getInstance(){ return(Export::instance) ; }

Export* Export::addContent(string content){
    this->content.append(content) ;
}

Export* Export::run(){
    // Promotion
    this->addContent("Data.Promotion=") ;
    this->addContent(Promotion::jsonList()) ;
    this->addContent(";") ;

    // Period
    this->addContent("Data.Period=") ;
    this->addContent(Period::jsonList()) ;
    this->addContent(";") ;

    // Day
    this->addContent("Data.Day=") ;
    this->addContent(Day::jsonList()) ;
    this->addContent(";") ;

    // Room
    this->addContent("Data.Room=") ;
    this->addContent(Room::jsonList()) ;
    this->addContent(";") ;

    // Teacher
    this->addContent("Data.Teacher=") ;
    this->addContent(Teacher::jsonList()) ;
    this->addContent(";") ;

    // Week
    this->addContent("Data.Week=") ;
    this->addContent(Week::jsonList()) ;
    this->addContent(";") ;

    // TimeSlot
    this->addContent("Data.TimeSlot=") ;
    this->addContent(TimeSlot::jsonList()) ;
    this->addContent(";") ;

    this->exec() ;
}

Export* Export::createFiles(){

}

Export* Export::exec(){
    cout << this->content ;
}

