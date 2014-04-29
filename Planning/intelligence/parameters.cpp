#include "../main.h"

float Parameters::temperatureInitiale = 10 ;

Parameters::Parameters(){}

float Parameters::random(float min, float max)
{
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return min + r;
}

int Parameters::randomInt(int min, int max)
{
    float random = ((float)rand()) / (float)RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return (int)(min + r);
}

float Parameters::getTemperatureInitiale(){ return(Parameters::temperatureInitiale) ; }
