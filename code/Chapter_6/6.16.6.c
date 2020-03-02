#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORDSIZE 50

int main(void)
{
    char word[WORDSIZE];

    printf("Enter a word: ");
    scanf("%s", word);
    short wordLen = strlen(word);
    for (int i = wordLen-1; i >= 0; i--)
        putchar(word[i]);
    putchar('\n');

    system("pause");
    return 0;
}