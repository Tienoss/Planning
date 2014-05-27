#ifndef INTELLIGENCE_H
#define INTELLIGENCE_H

#include "../main.h"

class Intelligence
{
public:
    Intelligence();
    static void run();
    static bool critereMetropolis(float delta, float temp) ;
    static bool checkDatas() ;
    static void initialiseHashmaps();


};
#endif // INTELLIGENCE_H
