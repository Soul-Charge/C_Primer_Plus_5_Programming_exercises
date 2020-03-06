#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 8

int main(void)
{
    int intarray[8];

    printf("Enter %d integers(use space to divide): ", ARRAYSIZE);
    for (int i = 0; i < ARRAYSIZE; i++)
        scanf("%d", intarray + i);
    for (int i = ARRAYSIZE; i > 0; i--)
        printf("%d ", intarray[i-1]);

    system("pause");
    return 0;
}