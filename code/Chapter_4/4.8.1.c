#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 100

int main(void)
{
    char first_name[NAMESIZE];
    char last_name[NAMESIZE];

    printf("Enter you first name:");
    scanf("%s", first_name);
    printf("Enter you last name:");
    scanf("%s", last_name);
    printf("Hello! %s %s.\n", last_name, first_name);

    system("pause");
    return 0;
}