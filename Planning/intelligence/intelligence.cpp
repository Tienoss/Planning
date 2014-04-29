#include "../main.h"

Intelligence::Intelligence()
{

}

void Intelligence::run(){
    if(!Intelligence::checkDatas()){
        cout << "Impossible de créer un planning !" ;
        return ;
    }


    //generation d'une entité au hasard au début, orientée à la fin pour diminuer les temps de calcul
    Course* c1 = new Course();
    c1
            ->setPromotion(Promotion::getById(0))
            ->setTeacher(Teacher::getById(0))
            ->setRoom(Room::getById(0))
            ->setTimeslot(TimeSlot::getById(0)) ;
    //On définit un température initiale
    float tempInit = Parameters::getTemperatureInitiale();
    Promotion* p1 = new Promotion();

    //Tant que la température initiale (T) > 0

    //Promotion::pickUp();

    /*
    while(tempInit > 0){
    }
    */
        //On génère une seconde entité ayant une caractéristique de modifiée (à partir de la première)
        //On l’évalue (via une fonction d’évaluation)
        //Si meilleure solution on la garde, sinon probabilité en fonction de T d’être gardée
        //Décrémenter T
    //FinTantQue


}

bool Intelligence::checkDatas(){
    cout << "Vérification de la cohérance des données" << endl << endl ;

    cout << "1. Vérification du nombre total d'heures à placer et du nombre total d'heures disponibles" << endl ;
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
