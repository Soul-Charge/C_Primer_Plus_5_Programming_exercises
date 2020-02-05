#include <stdio.h>
#include <stdlib.h>
#define TOES 10

int main(void)
{
    unsigned short toes = TOES;

    printf("toes=%14d\n", toes);
    printf("sum of two toes=%3d\n", toes + toes);
    printf("square of toes=%4d\n", toes * toes);

    system("pause");
    return 0;
}