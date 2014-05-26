#include "main.h"

void MediumDataSet2::load(){
    // Promotion
    Promotion* p = (new Promotion())->setName("Promotion1");

    // Teacher
    Teacher* t = (new Teacher())->setName("Prof1");

    t->isAvailable(p);
    //t->isAbsent();
    // Room
    (new Room())->setName("Room1");

    // Week
    (new Week())->setName("Week1");
    // Day
    (new Day())->setName("Lundi");
    (new Day())->setName("Mardi");
    (new Day())->setName("Mercredi");
    (new Day())->setName("Jeudi");
    (new Day())->setName("Vendredi");
    // Period
    (new Period())->setFrom(480)->setLength(120); // 8h 10h
    (new Period())->setFrom(600)->setLength(120); // 10h 12h

    // Module
    (new Module())->setTeacher(t)->setPromotion(p)->setDuration(240) ;
}
