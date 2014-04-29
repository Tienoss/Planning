#include "../main.h"

Intelligence::Intelligence()
{

}

void Intelligence::run(){
    float tempInit = Parameters::getTemperatureInitiale();
    (new Planning())->fromRandom()->evaluate();

    while(tempInit > 0){
        (new Planning())->from(Planning::list.first())->makeChange()->evaluate();

        if(Planning::list.first()->getScore() < Planning::list.last()->getScore()){
            Planning::list[0] = Planning::list.last();
            Planning::list.removeLast();
        }
        else{

        }
        tempInit -= Parameters::getTemperatureDecrement();
    }

}
