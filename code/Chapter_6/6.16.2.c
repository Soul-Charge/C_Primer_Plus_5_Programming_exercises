#include <stdio.h>
#include <stdlib.h>
#define ROWS 5

int main(void)
{
    const char showCoin = '$';

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j <= i; j++)
            putchar(showCoin);
        putchar('\n');
    }

            system("pause");
    return 0;
}