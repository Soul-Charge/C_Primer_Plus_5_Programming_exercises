#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 26

int main(void)
{
    char alphas[ARRAYSIZE];

    for (char i = 'a'; i <= 'z'; i++)
        alphas[i-'a'] = i;
    for (int i = 0; i < 26; i++)
        putchar(alphas[i]);
    putchar('\n');

    system("pause");
    return 0;
}