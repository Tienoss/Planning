#include "../main.h"

Export* Export::instance = new Export() ;

Export::Export(){}

Export* Export::getInstance(){ return(Export::instance) ; }

Export* Export::run(){
    this->exportContent() ;
    this->createFiles() ;
    this->openBrowser() ;
    return 0;
}


Export* Export::addContent(string content){
    this->content.append(content) ;
    return 0;
}

Export* Export::exportContent(){
    this->addContent("Data = {} ;") ;

    // Teacher
    this->addContent("Data.Teacher=") ;
    this->addContent(Teacher::jsonList()) ;
    this->addContent(";") ;

    // Promotion
    this->addContent("Data.Promotion=") ;
    this->addContent(Promotion::jsonList()) ;
    this->addContent(";") ;

    // Room
    this->addContent("Data.Room=") ;
    this->addContent(Room::jsonList()) ;
    this->addContent(";") ;

    // Week
    this->addContent("Data.Week=") ;
    this->addContent(Week::jsonList()) ;
    this->addContent(";") ;

    // Day
    this->addContent("Data.Day=") ;
    this->addContent(Day::jsonList()) ;
    this->addContent(";") ;

    // Period
    this->addContent("Data.Period=") ;
    this->addContent(Period::jsonList()) ;
    this->addContent(";") ;

    // TimeSlot
    this->addContent("Data.TimeSlot=") ;
    this->addContent(TimeSlot::jsonList()) ;
    this->addContent(";") ;

    // Course
    this->addContent("Data.Course=") ;
    this->addContent(Planning::best->jsonListOfCourses()) ;
    this->addContent(";") ;

    return(this) ;
}

Export* Export::createFiles(){
    // Création des fichiers
    this->urlHtml = QDir::currentPath().append("/display.html").toStdString() ;
    this->urlJs = QDir::currentPath().append("/datas.js").toStdString() ;

    // Fichier Html
    QFile htmlDest(this->urlHtml.c_str()) ;
    htmlDest.open(QIODevice::WriteOnly) ;
    QFile htmlSource(":/html") ;
    htmlSource.open(QIODevice::ReadOnly) ;
    htmlDest.write(htmlSource.readAll()) ;
    htmlDest.close();

    // Fichier script
    QFile jsDest(this->urlJs.c_str()) ;
    jsDest.open(QIODevice::WriteOnly) ;
    jsDest.write(this->content.c_str()) ;
    jsDest.close();
    return 0;
}

Export* Export::openBrowser(){
    QString* path = new QString() ;
    path->append("file:///") ;
    path->append(this->urlHtml.c_str()) ;
    QDesktopServices::openUrl(QUrl(*path));
    return(this) ;
}

