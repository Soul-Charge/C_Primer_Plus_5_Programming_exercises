#include <stdio.h>
#include <stdlib.h>

int intSquare(int val)
{
    return val * val;
}

int main(void)
{
    int lower = 0;
    int upper = 0;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while (upper > lower)
    {
        /*** method 1 */
        int sum = 0;
        for (int i = 0; i <= upper - lower; i++)
            sum += intSquare(lower + i);
        /****/

        /*** method 2
        int sum = 0;
        int Lower = lower;
        int Upper = upper;
        while (Lower <= Upper)
            sum += intSquare(Lower++);
        ***/

        printf("The sums of the squares from %d to %d is %d\n", intSquare(lower), intSquare(upper), sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    }

    puts("Done");
    system("pause");
    return 0;
}