#include <stdio.h>
#include <stdlib.h>

double power(double x, int p);

int main(void)
{
    printf("2^3:%lf\n", power(2, 3));
    printf("2^-1:%lf\n", power(2, -1));
    printf("2^-3:%lf\n", power(2, -3));
    printf("2^0:%lf\n", power(2, 0));
    printf("0^3:%lf\n", power(0, 3));

    system("pause");
    return 0;
}

double power(double x, int p)
{
    if (0 == x)
        return 0;
    if (0 == p)
        return 1;

    if (p > 1)
        return x * power(x, p - 1);
    else if (1 == p)
        return x;
    else if (p < -1)
        return (1 / x) * power(x, p + 1);
    else if (-1 == p)
        return 1 / x;
}