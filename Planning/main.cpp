#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    srand(time(NULL));

    FullDataSet::load() ;
    TimeSlot::generate() ;

    clock_t tStart = clock();

    Intelligence::run() ;

    printf("Time taken: %.8fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    Export::getInstance()->run() ;

    //Window w;
    //w.show();

    return 0;

}


