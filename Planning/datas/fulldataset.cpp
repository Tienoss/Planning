#include "main.h"

void FullDataSet::load(){

    // Week
    Week* w1 = (new Week())->setName("Semaine 1");
    Week* w2 = (new Week())->setName("Semaine 2");
    Week* w3 = (new Week())->setName("Semaine 3");
    Week* w4 = (new Week())->setName("Semaine 4");
    Week* w5 = (new Week())->setName("Semaine 5");
    Week* w6 = (new Week())->setName("Semaine 6");
    Week* w7 = (new Week())->setName("Semaine 7");
    Week* w8 = (new Week())->setName("Semaine 8");
    Week* w9 = (new Week())->setName("Semaine 9");
    Week* w10 = (new Week())->setName("Semaine 10");
    Week* w11 = (new Week())->setName("Semaine 11");
    Week* w12 = (new Week())->setName("Semaine 12");
    Week* w13 = (new Week())->setName("Semaine 13");
    Week* w14 = (new Week())->setName("Semaine 14");
    Week* w15 = (new Week())->setName("Semaine 15");

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
    Promotion* b1 = (new Promotion())->setName("B1");
    Promotion* b2 = (new Promotion())->setName("B2");
    Promotion* i3 = (new Promotion())->setName("I3");
    Promotion* i4 = (new Promotion())->setName("I4");


    // Teacher
    Teacher* cambou = (new Teacher())->setName("Cambou");
    cambou->addUnavailability(mardi) ;
    cambou->addUnavailability(mercredi) ;
    cambou->addUnavailability(jeudi) ;
    cambou->addUnavailability(vendredi) ;

    Teacher* reinold = (new Teacher())->setName("Reinold");
    reinold->addUnavailability(vendredi) ;

    Teacher* bordat = (new Teacher())->setName("Bordat");
    bordat->addUnavailability(mercredi) ;

    Teacher* cabaz = (new Teacher())->setName("Cabaz");
    cabaz->addUnavailability(a2) ;

    Teacher* lemonnier = (new Teacher())->setName("Lemonnier");
    lemonnier->addUnavailability(lundi) ;
    lemonnier->addUnavailability(mardi) ;
    lemonnier->addUnavailability(vendredi) ;
    lemonnier->addUnavailability(m1) ;
    lemonnier->addUnavailability(m2) ;

    Teacher* deschamps = (new Teacher())->setName("Deschamps");
    deschamps->addUnavailability(lundi) ;
    deschamps->addUnavailability(mardi) ;

    Teacher* lavelle = (new Teacher())->setName("Lavelle");
    lavelle->addUnavailability(m1) ;
    lavelle->addUnavailability(w12) ;
    lavelle->addUnavailability(w13) ;

    // Room
    (new Room())->setName("Belle-Ile");
    (new Room())->setName("Breat");
    (new Room())->setName("Ouessant");
    (new Room())->setName("Oleron");
    (new Room())->setName("Hawai");
    (new Room())->setName("Fidji");

    // Module
    (new Module())->setTeacher(cambou)->setPromotion(b1)->setDuration(1200) ;
    (new Module())->setTeacher(cambou)->setPromotion(b2)->setDuration(1200) ;
    (new Module())->setTeacher(cambou)->setPromotion(i3)->setDuration(1200) ;
    (new Module())->setTeacher(cambou)->setPromotion(i4)->setDuration(1200) ;

    (new Module())->setTeacher(reinold)->setPromotion(b2)->setDuration(1200) ;
    (new Module())->setTeacher(reinold)->setPromotion(i3)->setDuration(1200) ;
    (new Module())->setTeacher(reinold)->setPromotion(i4)->setDuration(1200) ;
    (new Module())->setTeacher(reinold)->setPromotion(i4)->setDuration(1200) ;

    (new Module())->setTeacher(bordat)->setPromotion(b1)->setDuration(1200) ;
    (new Module())->setTeacher(bordat)->setPromotion(b2)->setDuration(1200) ;
    (new Module())->setTeacher(bordat)->setPromotion(b2)->setDuration(1200) ;
    (new Module())->setTeacher(bordat)->setPromotion(i3)->setDuration(1200) ;

    (new Module())->setTeacher(cabaz)->setPromotion(i3)->setDuration(1200) ;
    (new Module())->setTeacher(cabaz)->setPromotion(i4)->setDuration(1200) ;

    (new Module())->setTeacher(lemonnier)->setPromotion(i4)->setDuration(600) ;

    (new Module())->setTeacher(deschamps)->setPromotion(i3)->setDuration(1200) ;
    (new Module())->setTeacher(deschamps)->setPromotion(i4)->setDuration(2400) ;

    (new Module())->setTeacher(lavelle)->setPromotion(i4)->setDuration(2400) ;

}
