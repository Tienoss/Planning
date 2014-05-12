#include "../main.h"

void MinimalDataSet::load(){
    // Promotion
    Promotion* p = (new Promotion())->setName("Promotion1");

    // Teacher
    Teacher* t = (new Teacher())->setName("Prof1");

    // Room
    (new Room())->setName("Room1");

    // Week
    (new Week())->setName("Week1");
    // Day
    (new Day())->setName("Day1");
    // Period
    (new Period())->setFrom(480)->setLength(120);

    // Module
    (new Module())->setTeacher(t)->setPromotion(p)->setDuration(240) ;
}
