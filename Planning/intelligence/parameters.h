#ifndef PARAMETERS_H
#define PARAMETERS_H

#include "../main.h"

class Parameters
{

private:
    static float temperatureInitiale;

public:
    Parameters();
    static float getTemperatureInitiale() ;
    static float random(float min, float max) ;
    static int randomInt(int min, int max);

} ;
#endif // PARAMETERS_H
