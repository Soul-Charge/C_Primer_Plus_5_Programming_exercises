#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int replace_count = 0;

    printf("Enter a something end by #:\n");
    while (scanf("%c", &c) && c != '#')
    {
        if (c == '.')
        {
            printf("!");
            replace_count++;
        }
        else if (c == '!')
        {
            printf("!!");
            replace_count++;
        }
        else
            printf("%c", c);
    }
    printf("\nReplace %d times\n", replace_count);

    system("pause");
    return 0;
}