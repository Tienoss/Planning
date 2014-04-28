#include "main.h"

int main()
{
    MinimalDataSet::load() ;
    TimeSlot::generate() ;
    Export::getInstance()->run() ;
    return 0;
}

