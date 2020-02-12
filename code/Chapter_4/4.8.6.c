#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    float floatValue = 1.0 / 3.0;
    double doubleValue = 1.0 / 3.0;

    printf("float:  %.4f %.12f %.16f\n", floatValue, floatValue, floatValue);
    printf("double: %.4lf %.12lf %.16lf\n", doubleValue, doubleValue, doubleValue);
    printf("FLT_DIG: %d %d %d\n", FLT_DIG, FLT_DIG, FLT_DIG);
    printf("DBL_DIG: %d %d %d\n", DBL_DIG, DBL_DIG, DBL_DIG);

    system("pause");
    return 0;
}