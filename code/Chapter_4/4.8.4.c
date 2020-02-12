#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 100

int main(void)
{
    float height;
    char name[NAMESIZE];

    printf("What's your name:");
    scanf("%s", name);
    printf("Enter your length:___(cm)\b\b\b\b\b\b\b");
    scanf("%f", &height);
    printf("%s, you are %.2f m tall.\n", name, height / 100);

    system("pause");
    return 0;
}