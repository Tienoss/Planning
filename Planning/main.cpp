#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MinimalDataSet::load() ;
    TimeSlot::generate() ;

    Export::getInstance()->run() ;

    //Window w;
    //w.show();

    return a.exec();

}

