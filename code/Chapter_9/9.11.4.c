#include <stdio.h>
#include <stdlib.h>

double CountHarmonicMean(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two number: ");
    scanf("%lf %lf", &x, &y);
    printf("Harmonic mean is : %lf\n", CountHarmonicMean(x, y));

    system("pause");
    return 0;
}

double CountHarmonicMean(double x, double y)
{
    return 1 / ((1/x + 1/y) / 2);
}