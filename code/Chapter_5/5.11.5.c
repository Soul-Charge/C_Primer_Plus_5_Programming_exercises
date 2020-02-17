#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count, sum, max;
    count = sum = 0;
    max = 20;

    printf("How many numbers?: ");
    scanf("%d", &max);

    while(count++ < max)
        sum = sum + count;
    printf("sum = %d\n", sum);

    system("pause");
    return 0;
}