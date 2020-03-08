#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    int spacesCount = 0;
    int lineCount = 0;
    int othersCount = 0;

    printf("Enter something(# to quit)\n");
    scanf("%c", &c);
    while (c != '#')
    {
        if (c == ' ')
            spacesCount++;
        else if (c == '\n')
            lineCount++;
        else
            othersCount++;
        scanf("%c", &c);
    }
    printf("You entered %d spaces, %d line, %d others.\n", spacesCount, lineCount, othersCount);

    system("pause");
    return 0;
}