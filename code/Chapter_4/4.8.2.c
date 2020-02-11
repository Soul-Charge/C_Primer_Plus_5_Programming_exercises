#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMESIZE 200

int main(void)
{
    char name[NAMESIZE];

    puts("What's your name?");
    scanf("%s", name);
    printf("a: Hello \"%s\"\n", name);
    printf("b: Hello \"%20s\"\n", name);
    printf("c: Hello \"%-20s\"\n", name);
    printf("d: Hello %*s\n", (int)strlen(name)+3, name);

    system("pause");
    return 0;
}