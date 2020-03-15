#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    puts("Enter something");
    for (int i = 0; (ch = getchar()) != EOF; i++)
    {
        if (ch == '\n')
            printf("\\n:%3d  ", ch);
        else if (ch == '\t')
            printf("\\t:%3d  ", ch);
        else if (ch < ' ')
            printf("^%c:%3d  ", ch + 64, ch);
        else
            printf("%2c:%3d  ", ch, ch);
        if ((i+1) % 10 == 0)
            putchar('\n');
    }

    putchar('\n');
    system("pause");
    return 0;
}