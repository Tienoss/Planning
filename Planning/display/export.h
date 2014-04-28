#ifndef EXPORT_H
#define EXPORT_H

#include "../main.h"

class Export
{

private:
    Export();

public:
    static Export* instance ;
    static Export* getInstance() ;

    string content ;
    Export* run() ;
    Export* addContent(string content) ;
    Export* createFiles() ;
    Export* exec() ;
    Export* launchBrowser(const std::string &url) ;
};

#endif // EXPORT_H
