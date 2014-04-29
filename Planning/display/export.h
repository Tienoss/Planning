#ifndef EXPORT_H
#define EXPORT_H

#include "../main.h"

class Export
{

private:
    Export();
    string urlHtml ;
    string urlJs ;
    string content ;

public:
    static Export* instance ;
    static Export* getInstance() ;

    Export* run() ;

    Export* addContent(string content) ;
    Export* exportContent() ;

    Export* createFiles() ;

    Export* openBrowser() ;

};

#endif // EXPORT_H
