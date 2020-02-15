#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Input a number(integer):");
    scanf("%d", &num);
    for (int i = num; i <= num + 10; i++)
        printf("%d ", i);
    putchar('\n');

    system("pause");
    return 0;
}