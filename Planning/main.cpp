#include "main.h"

int main()
{
    MinimalDataSet::load() ;
    TimeSlot::generate() ;
    Export::getInstance()->run() ;
    Intelligence::run();
    return 0;
}

