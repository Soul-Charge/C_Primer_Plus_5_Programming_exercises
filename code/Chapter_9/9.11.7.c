#include <stdio.h>
#include <stdlib.h>

double power(double x, int power);

int main(void)
{
    double val;
    int p;

    puts("Enter a number and power(q to quit):");
    while (scanf("%lf", &val) != 0 && scanf("%d", &p) != 0)
        printf("%lf ^ %d = %lf\n", val, p, power(val, p));

    return 0;
}

double power(double x, int power)
{
    double val = x;

    if (x == 0)
        return 0;
    if (power < 0)
    {
        for (int i = 1; i < -power; i++) //先算正数幂
            val *= x;
        return 1 / val; // 正数幂的倒数就是负数幂
    }
    else if (power > 0)
    {
        for (int i = 1; i < power; i++)
            val *= x;
        return val;
    }
    else
        return 1;
}