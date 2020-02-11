#include <stdio.h>
#include <stdlib.h>
#define INCHTOCM 2.54 // one inch == 2.54 cm

int main(void)
{
    double length;

    printf("Enter your length:___(cm)\b\b\b\b\b\b\b");
    scanf("%lf", &length);
    printf("Your length is:\n");
    printf("     %.2lf cm.\n", length);
    printf("     %.2lf inch.\n", length * INCHTOCM);

    system("pause");
    return 0;
}