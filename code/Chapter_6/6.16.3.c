#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int i = 'F'; i >= 'A'; i--)
    {
        for (int j = 'F'; j >= i; j--)
            putchar(j);
        putchar('\n');
    }

    system("pause");
    return 0;
}