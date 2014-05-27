#include "main.h"

void MediumDataSet3::load(){
    // Week
    (new Week())->setName("Week1");

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
    Promotion* p = (new Promotion())->setName("Promotion1");

    // Teacher
    Teacher* cambou = (new Teacher())->setName("Cambou");
    Teacher* reinold = (new Teacher())->setName("Reinold");
    cambou->addUnavailability(lundi) ;
    cambou->addUnavailability(mardi) ;
    reinold->addUnavailability(mardi) ;

    // Room
    (new Room())->setName("Room1");

    // Module
    (new Module())->setTeacher(cambou)->setPromotion(p)->setDuration(480) ;
    (new Module())->setTeacher(reinold)->setPromotion(p)->setDuration(480) ;
}
