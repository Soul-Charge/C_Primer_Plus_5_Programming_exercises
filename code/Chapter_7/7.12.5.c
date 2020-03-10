#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val = 0;
    int even_count = 0;
    int even_sum = 0;
    int odd_count = 0;
    int odd_sum = 0;

    printf("Enter some number end by 0: \n");
    while (scanf("%d", &val) && val) // 当val == 0 或scanf()无法读入时
    {
        switch (val % 2)
        {
        case 0:
            even_count++;
            even_sum += val;
            break;
        
        default:
            odd_count++;
            odd_sum += val;
            break;
        }
    }
    printf("even counts: %d\tavg: %.5lf\n", even_count, (double)even_sum / (double)even_count);
    printf("odd counts:  %d\tavg: %.5lf\n", odd_count, (double)odd_sum / (double)odd_count);

    system("pause");
    return 0;
}