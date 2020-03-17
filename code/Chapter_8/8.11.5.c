#include <stdio.h>
#include <stdlib.h>

int GetIntVal(void);
char GetChoice(void);

int main(void)
{
    int upper;
    int lower;
    int guess;
    char respond;

    printf("Enter the upper: ");
    upper = GetIntVal();
    printf("Enter the lower: ");
    lower = GetIntVal();
    guess = (upper + lower) / 2;

    printf("Selecting a number in[%d,%d]\n", lower, upper);
    printf("After I answered respond a option(b | s | y)\n");
    while ('y' != respond)
    {
        printf("Is it %d?(b|s|y)\n", guess);
        respond = GetChoice();
        if ('b' == respond)
            upper = guess;
        else if ('s' == respond)
            lower = guess;
        guess = (upper + lower) / 2;
    }
    puts("I can do it!");

    system("pause");
    return 0;
}

int GetIntVal(void)
{
    int val;
    char ch;

    while (scanf("%d", &val) == 0)
    {
        putchar('"');
        while ((ch = getchar()) != '\n')
            putchar(ch);
        putchar('"');
        puts("is not a valid input.");
    }
    while (getchar() != '\n')
        continue;
    return val;
}

char GetChoice(void)
{
    char ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}