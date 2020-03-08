#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 0;

    printf("Enter something(end by #)\n");
    for (int i = 1; (c = getchar()) != '#'; i++)
    {
        printf("'%c'-%d\t", c, c);
        if (i % 8 == 0)
            printf("\n");
    }

    system("pause");
    return 0;
}