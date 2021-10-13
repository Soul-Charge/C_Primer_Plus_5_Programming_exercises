//Harmonic mean Ğ³¾ùÖµ
#include <math.h>
double Harmonic_mean (double x,double y)
{
    double average;
    average = ( pow(x,-1) + pow(y,-1) ) / 2;
    return pow(average,-1);
}