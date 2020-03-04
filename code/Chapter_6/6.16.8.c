#include <stdio.h>
#include <stdlib.h>

double calculation (double val1, double val2)
{
    return (val1 - val2) / (val1 * val2);
}

int main(void)
{
    double val1;
    double val2;

    printf("Enter two floating number(eg: 23.1 13.4):");
    while (scanf("%lf %lf", &val1, &val2) == 2)
    {
        printf("(%.3lf-%.3lf) / (%.3lf*%.3lf)=%.3lf\n", val1, val2, val1, val2, calculation(val1, val2));
        printf("Enter two floating number(eg: 23.1 13.4)(q to quit):");
    }

    system("pause");
    return 0;
}