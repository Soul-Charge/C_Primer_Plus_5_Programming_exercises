#include <stdio.h>
#include <stdlib.h>
#define AGE 17

int main(void)
{
    unsigned short age = AGE;
    printf("Age:%5d\n", age);
    printf("Days:%5d\n", age * 365);
    system("pause");
    return 0;
}