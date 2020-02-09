#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short age;

    printf("Input your age:");
    scanf("%d", &age);
    printf("You had lived %.0f seconds.\n", 3.156E7 * age);

    system("pause");
    return 0;
}