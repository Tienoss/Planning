#include "../main.h"

void MinimalDataSet::load(){
    // Promotion
    Promotion* p = (new Promotion())->setName("Promotion 1");

    // Teacher
    Teacher* t = (new Teacher())->setName("Prof 1");

    // Room
    (new Room())->setName("Room 1");

    // Week
    (new Week())->setName("1");
    // Day
    (new Day())->setName("Day 1");
    // Period
    (new Period())->setFrom(480)->setLength(120);

    // Module
    (new Module())->setTeacher(t)->setPromotion(p)->setNumberHours(2) ;
}
