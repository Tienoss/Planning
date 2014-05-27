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

    /*while(temp > 0){

        test->from(best)->makeChange()->evaluate() ;

        if(Planning::best->getScore() > Planning::test->getScore()){
            // Le test est meilleur
            Planning::best->from(test) ;
        }
        else{
            // Le test est moins bon, on a quand même une proba de le garder
            float proba = exp( (Planning::test->getScore() - Planning::best->getScore()) / temp ) ;
            if(Parameters::random(0,1) < proba)
                Planning::best->from(test) ;
        }
        temp -= Parameters::getTemperatureDecrement() ;
    }*/







    /*(new Planning())->fromRandom()->evaluate();

    while(tempInit > 0){
        (new Planning())->from(Planning::list.first())->makeChange()->evaluate();

        if(Planning::list.first()->getScore() < Planning::list.last()->getScore()){
            Planning::list[0] = Planning::list.last();
            Planning::list.removeLast();
        }
        else{
		}
		tempInit -= Parameters::getTemperatureDecrement();
   }
    */
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
