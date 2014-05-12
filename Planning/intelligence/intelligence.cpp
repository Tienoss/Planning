#include "../main.h"

Intelligence::Intelligence()
{

}

void Intelligence::run(){

    if(!Intelligence::checkDatas()){
        cout << "Impossible de cr�er un planning !" ;
        return ;
    }

    float tempInit = Parameters::getTemperatureInitiale();
    (new Planning())->fromRandom()->evaluate();

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

}

bool Intelligence::checkDatas(){
    cout << "V�rification de la coh�rance des donn�es" << endl << endl ;

    cout << "1. V�rification du nombre total d'heures � placer et du nombre total d'heures disponibles" << endl ;
    float planified = 0 ;
    for(int i = 0 ; i < Module::list.size() ; i++)
        planified += Module::list[i]->getDuration() ;
    cout << planified << " minutes � placer" << endl ;
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
