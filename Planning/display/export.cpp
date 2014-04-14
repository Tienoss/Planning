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

    this->exec() ;
}

Export* Export::createFiles(){

}

Export* Export::exec(){
    cout << this->content ;
}

