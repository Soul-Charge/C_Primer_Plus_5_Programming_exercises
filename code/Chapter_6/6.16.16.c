#include <stdio.h>
#include <stdlib.h>
#define TAKEN 10

int main(void)
{
    int years = 0;
    double money = 100;

    while (money > 0)
    {
        money += money * 0.08;
        money -= TAKEN;
        years++;
    }
    printf("%d years later.\n", years);

    system("pause");
    return 0;
}