#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    srand(time(NULL));

    MediumDataSet2::load() ;
    TimeSlot::generate() ;

    Intelligence::run() ;

    Export::getInstance()->run() ;

    //Window w;
    //w.show();

    return 0;

}


