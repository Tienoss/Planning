#include "../main.h"

void MediumDataSet1::load(){
    // Promotion
    Promotion* p = (new Promotion())->setName("Promotion1");

    // Teacher
    Teacher* t = (new Teacher())->setName("Prof1");
    t->isAbsent()
    // Room
    (new Room())->setName("Room1");

    // Week
    (new Week())->setName("Week1");
    // Day
    (new Day())->setName("Day1");
    // Period
    (new Period())->setFrom(480)->setLength(120); // 8h 10h
    (new Period())->setFrom(600)->setLength(120); // 10h 12h

    // Module
    (new Module())->setTeacher(t)->setPromotion(p)->setDuration(240) ;
}
