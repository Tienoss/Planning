#include "main.h"

void MediumDataSet2::load(){

     /* Jeu de test de dev uniquement */

    // Week
    (new Week())->setName("Week1");

    // Day
    Day* lundi = (new Day())->setName("Lundi");
    Day* mardi = (new Day())->setName("Mardi");
    Day* mercredi = (new Day())->setName("Mercredi");
    Day* jeudi = (new Day())->setName("Jeudi");
    Day* vendredi = (new Day())->setName("Vendredi");

    // Period
    (new Period())->setFrom(480)->setLength(120); // 8h 10h
    (new Period())->setFrom(600)->setLength(120); // 10h 12h

    // Promotion
    Promotion* p = (new Promotion())->setName("I4");

    // Teacher
    Teacher* camboue = (new Teacher())->setName("Papi Camboue");
    camboue->addUnavailability(lundi) ;

    // Room
    (new Room())->setName("Belle Ile");

    // Module
    (new Module())->setTeacher(camboue)->setPromotion(p)->setDuration(240) ;
}
