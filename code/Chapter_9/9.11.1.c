#include <stdio.h>
#include <stdlib.h>

double DoubleMin(double x, double y);

int main(void)
{
    double x, y;

    puts("Enter two double val divided by ' '(q to quit)");
    while (scanf("%lf %lf", &x, &y) != 0)
    {
        printf("The min is: %lf\n", DoubleMin(x, y));
        puts("Enter two double val divided by ' '(q to quit)");
    }

    system("pause");
    return 0;
}

double DoubleMin (double x, double y)
{
    if (x < y)
        return x;
    else
        return y;
}