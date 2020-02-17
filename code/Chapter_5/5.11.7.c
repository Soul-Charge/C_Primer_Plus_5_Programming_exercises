#include <stdio.h>
#include <stdlib.h>

float floatCube(float n)
{
    return n * n * n;
}

int main(void)
{
    float n;

    printf("Enter a floating_point number: ");
    scanf("%f", &n);
    printf("It's cube is: %f\n", floatCube(n));

    system("pause");
    return 0;
}