#include "../main.h"

Intelligence::Intelligence()
{

}

void Intelligence::run(){

    Intelligence::initialiseHashmaps();

    Planning* best = Planning::best;
    Planning* test = Planning::test;
    float temp = Parameters::getTemperatureInitiale();

    cout << "Planning initial" << endl ;
    best->fromRandom()->evaluate()->log() ;

    while(temp > 0){
        best->evaluate() ;
        //cout << "Best score : " << best->getScore() << endl ;
        test->from(best)->makeChange()->evaluate() ;
        //cout << "Test score : " << test->getScore() << " - Best score : " << best->getScore() << endl ;
        float delta = Planning::test->getScore() - Planning::best->getScore() ;

        if(Intelligence::critereMetropolis(delta, temp)){
            //cout << "Keep test !" << endl ;
            best->from(test) ;
        }

        temp -= Parameters::getTemperatureDecrement() ;
    }
    cout << "Best final score : " << best->evaluate()->getScore() << endl ;
}

bool Intelligence::critereMetropolis(float delta, float temp){
    if(delta <= 0) return(true) ;
    else{
        float random = Parameters::random(0,1) ;
        float metropolis = exp((delta*(-1)) / temp) ;
        if(random < metropolis) return(true) ;
        else return(false) ;
    }
}

bool Intelligence::checkDatas(){
    cout << "Vérification de la cohérance des données" << endl << endl ;

    //cout << "1. Vérification du nombre total d'heures à placer et du nombre total d'heures disponibles" << endl ;
    float planified = 0 ;
    for(int i = 0 ; i < Module::list.size() ; i++)
        planified += Module::list[i]->getDuration() ;
    cout << planified << " minutes à placer" << endl ;
    float available = 0 ;
    for(int i = 0 ; i < TimeSlot::list.size() ; i++)
        available += TimeSlot::list[i]->getPeriod()->getLength() ;
    available *= Room::list.size() ;
    cout << available << " minutes disponibles" << endl ;
    if(available < planified){
        cout << "Il ne sera pas possible de planifier toutes les heures" << endl ;
        return(false) ;
    }
    cout << "OK" << endl << endl ;

    return(true) ;
}

void Intelligence::initialiseHashmaps(){
    Planning::best->initialiseHash();
    Planning::test->initialiseHash();
}
