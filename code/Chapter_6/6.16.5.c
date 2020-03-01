#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int upper = 0;
    int lower = 0;

    printf("Enter the upper: ");
    scanf("%d", &upper);
    printf("Enter the lower: ");
    scanf("%d", &lower);
    for (; lower <= upper; lower++)
        printf("%-9d %-9d %-9d\n", lower, lower * lower, lower * lower * lower);

    system("pause");
    return 0;
}