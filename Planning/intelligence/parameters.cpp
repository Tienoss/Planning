#include "../main.h"

float Parameters::temperatureInitiale = 100 ;
float Parameters::temperatureDecrement = 1 ;

Parameters::Parameters(){}

float Parameters::random(float min, float max)
{
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return min + r;
}

int Parameters::randomInt(int min, int max) {
    max++ ; return(rand()%(max-min)+min) ;
}

float Parameters::getTemperatureInitiale(){ return(Parameters::temperatureInitiale) ; }
float Parameters::getTemperatureDecrement(){ return(Parameters::temperatureDecrement) ; }
