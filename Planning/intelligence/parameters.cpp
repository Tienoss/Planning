#include "../main.h"

Parameters::Parameters(){}

float Parameters::random(float min, float max)
{
    float random = ((float) rand()) / (float) RAND_MAX;
    float diff = max - min;
    float r = random * diff;
    return min + r;
}
