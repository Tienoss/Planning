#include "main.h"

void MediumDataSet3::load(){

    // Week
    Week* w1 = (new Week())->setName("Semaine 1");
    Week* w2 = (new Week())->setName("Semaine 2");
    //Week* w3 = (new Week())->setName("Semaine 3");
    //Week* w4 = (new Week())->setName("Semaine 4");
    //Week* w5 = (new Week())->setName("Semaine 5");

    // Day
    Day* lundi = (new Day())->setName("Lundi");
    Day* mardi = (new Day())->setName("Mardi");
    Day* mercredi = (new Day())->setName("Mercredi");
    Day* jeudi = (new Day())->setName("Jeudi");
    Day* vendredi = (new Day())->setName("Vendredi");

    // Period
    Period* m1 = (new Period())->setFrom(480)->setLength(120); // 08h 10h
    Period* m2 = (new Period())->setFrom(600)->setLength(120); // 10h 12h
    Period* a1 = (new Period())->setFrom(840)->setLength(120); // 14h 16h
    Period* a2 = (new Period())->setFrom(960)->setLength(120); // 16h 18h

    // Promotion
    Promotion* i3 = (new Promotion())->setName("I3");
    Promotion* i4 = (new Promotion())->setName("I4");


    // Teacher
    Teacher* cambou = (new Teacher())->setName("M. Cambou");
    Teacher* reinold = (new Teacher())->setName("M. Reinold");
    Teacher* bordat = (new Teacher())->setName("Mme. Bordat");

    cambou->addUnavailability(mardi) ;
    cambou->addUnavailability(mercredi) ;
    cambou->addUnavailability(jeudi) ;
    cambou->addUnavailability(vendredi) ;
    //reinold->addUnavailability(vendredi) ;
    bordat->addUnavailability(mercredi) ;

    // Room
    (new Room())->setName("Belle Ile");
    (new Room())->setName("Breat");

    // Module
    //(new Module())->setTeacher(cambou)->setPromotion(i4)->setDuration(1200) ;
    (new Module())->setTeacher(reinold)->setPromotion(i4)->setDuration(1200) ;

    //(new Module())->setTeacher(cambou)->setPromotion(i3)->setDuration(1200) ;
    //(new Module())->setTeacher(reinold)->setPromotion(i3)->setDuration(1200) ;
    //(new Module())->setTeacher(bordat)->setPromotion(i3)->setDuration(1200) ;
}
