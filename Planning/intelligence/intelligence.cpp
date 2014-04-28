#include "../main.h"

Intelligence::Intelligence()
{

}

void Intelligence::run(){
    //generation d'une entité au hasard au début, orientée à la fin pour diminuer les temps de calcul
    new Course();
    //On définit un température initiale

    //Tant que la température initiale (T) > 0
        //On génère une seconde entité ayant une caractéristique de modifiée (à partir de la première)
        //On l’évalue (via une fonction d’évaluation)
        //Si meilleure solution on la garde, sinon probabilité en fonction de T d’être gardée
        //Décrémenter T
    //FinTantQue

    while(1){

    }
}
