#include "main.h"

int main()
{
    MinimalDataSet::load() ;
    Export::getInstance()->run() ;
    return 0;
}

