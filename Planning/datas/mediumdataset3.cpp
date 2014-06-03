#include "main.h"

void MediumDataSet3::load(){
    // Week
    (new Week())->setName("Semaine 01");
    //(new Week())->setName("Week2");

    // Day
    Day* lundi = (new Day())->setName("Lundi");
    Day* mardi = (new Day())->setName("Mardi");
    Day* mercredi = (new Day())->setName("Mercredi");
    Day* jeudi = (new Day())->setName("Jeudi");
    Day* vendredi = (new Day())->setName("Vendredi");

    // Period
    (new Period())->setFrom(480)->setLength(120); // 08h 10h
    (new Period())->setFrom(600)->setLength(120); // 10h 12h
    (new Period())->setFrom(840)->setLength(120); // 14h 16h
    (new Period())->setFrom(960)->setLength(120); // 16h 18h

    // Promotion
    Promotion* i4 = (new Promotion())->setName("I4");
    //Promotion* i3 = (new Promotion())->setName("I3");

    // Teacher
    Teacher* cambou = (new Teacher())->setName("Cambou");
    Teacher* reinold = (new Teacher())->setName("Reinold");
    Teacher* cabaz = (new Teacher())->setName("Cabaz");
    Teacher* lemmonier = (new Teacher())->setName("Lemmonier");
    Teacher* bordat = (new Teacher())->setName("Bordat");
    Teacher* deschamps = (new Teacher())->setName("Deschamps");
    cambou->addUnavailability(mardi) ;
    cambou->addUnavailability(mercredi) ;
    cambou->addUnavailability(jeudi) ;
    cambou->addUnavailability(vendredi) ;
    reinold->addUnavailability(vendredi) ;
    bordat->addUnavailability(jeudi) ;
    lemmonier->addUnavailability(mardi) ;
    deschamps->addUnavailability(mercredi) ;

    // Room
    (new Room())->setName("Belle-Ile");
    //(new Room())->setName("Breat");

    // Module
    (new Module())->setTeacher(cambou)->setPromotion(i4)->setDuration(480) ;
    (new Module())->setTeacher(reinold)->setPromotion(i4)->setDuration(480) ;
    (new Module())->setTeacher(bordat)->setPromotion(i4)->setDuration(480) ;
    (new Module())->setTeacher(deschamps)->setPromotion(i4)->setDuration(240) ;

    //(new Module())->setTeacher(cambou)->setPromotion(i3)->setDuration(480) ;
    //(new Module())->setTeacher(reinold)->setPromotion(i3)->setDuration(480) ;
    //(new Module())->setTeacher(bordat)->setPromotion(i3)->setDuration(240) ;
    //(new Module())->setTeacher(bordat)->setPromotion(i3)->setDuration(480) ;
    //(new Module())->setTeacher(lemmonier)->setPromotion(i3)->setDuration(480) ;
    //(new Module())->setTeacher(deschamps)->setPromotion(i3)->setDuration(240) ;
}
