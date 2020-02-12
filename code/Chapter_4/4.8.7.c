#include <stdio.h>
#include <stdlib.h>
#define LTR_PER_GAL 3.785
#define KM_PER_MILES 1.609

int main(void)
{
    double fuel_gal;
    double distance_miles;

    printf("Input fuel(gallon)   : ");
    scanf("%lf", &fuel_gal);
    printf("Input distance(miles): ");
    scanf("%lf", &distance_miles);
    printf("%lf miles per gallon.\n", distance_miles / fuel_gal);
    printf("%lf LTR per 100KM.\n", (fuel_gal * LTR_PER_GAL) / (distance_miles * KM_PER_MILES / 100));

    system("pause");
    return 0;
}