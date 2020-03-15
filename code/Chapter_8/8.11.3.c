#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int iUpperCase = 0;
    int iLowerCase = 0;

    puts("Enter something:");
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            iUpperCase++;
        else if (islower(ch))
            iLowerCase++;
    }
    printf("The number of uppercase: %d\n", iUpperCase);
    printf("The number of lowercase: %d\n", iLowerCase);

    system("pause");
    return 0;
}