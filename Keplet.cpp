#include <iostream>
#include <windows.h>
#include <iomanip>
#include <math.h>

float keplet(float a, float b, float c, float alfa)
{
    float radian = (alfa/180)*M_PI;

    return (a+b)/(pow(c,2))*sqrt(3+pow(sin(radian), 2)+2*pow(cos(radian), 3));
}
