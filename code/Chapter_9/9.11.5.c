#include <stdio.h>
#include <stdlib.h>

void larger_of(double *x, double *y);

int main(void)
{
    double x = 10;
    double y = 20;
    printf("x = %lf\ny = %lf\n", x, y);
    larger_of(&x, &y);
    puts("After 'larger_of()'");
    printf("x = %lf\ny = %lf\n", x, y);

    system("pause");
    return 0;
}

void larger_of(double *x, double *y)
{
    if (*x > *y)
        *y = *x;
    else
        *x = *y;
}