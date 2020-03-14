#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int chCount;

    puts("Enter something");
    for (chCount = 0; getchar() != EOF; chCount++)
        ;
    printf("You have entered %d characters.\n", chCount);
    system("pause");
    return 0;
}