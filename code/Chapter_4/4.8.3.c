#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double number;

    printf("Enter a floating point number:");
    scanf("%lf", &number);
    printf("a. The input is %.1lf or %.1e\n", number, number);
    printf("b. The input is %+.3lf or %.3e\n", number, number);

    system("pause");
    return 0;
}