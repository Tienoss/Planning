#include "main.h"

void MediumDataSet2::load(){
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
    Promotion* p = (new Promotion())->setName("Promotion1");

    // Teacher
    Teacher* t = (new Teacher())->setName("Prof1");
    t->addUnavailability(mardi) ;

    // Room
    (new Room())->setName("Room1");

    // Module
    (new Module())->setTeacher(t)->setPromotion(p)->setDuration(240) ;
}
