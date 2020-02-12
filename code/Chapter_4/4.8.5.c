#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAMESIZE 100

typedef unsigned short uint16;

int main(void)
{
    char firstname[NAMESIZE];
    char lastname[NAMESIZE];

    printf("Enter your first name:");
    scanf("%s", firstname);
    printf("Enter your last name:");
    scanf("%s", lastname);

    uint16 firstnameLen = strlen(firstname);
    uint16 lastnameLen = strlen(lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n", firstnameLen, firstnameLen, lastnameLen, lastnameLen);
    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n", firstnameLen, firstnameLen, lastnameLen, lastnameLen);

    system("pause");
    return 0;
}