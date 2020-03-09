#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input_val = 0;
    int even_count = 0;
    int even_sum = 0;
    int odd_count = 0;
    int odd_sum = 0;

    printf("Enter some number end by 0: \n");
    while (scanf("%d", &input_val) && input_val != 0)
    {
        if (input_val % 2 == 0)
        {
            even_count++;
            even_sum += input_val;
        }
        else
        {
            odd_count++;
            odd_sum += input_val;
        }
    }
    printf("even counts: %5d\tavg:%5.2lf\n", even_count, (double)even_sum / (double)even_count);
    printf("odd counts : %5d\tavg:%5.2lf\n", odd_count, (double)odd_sum / (double)odd_count);

    system("pause");
    return 0;
}