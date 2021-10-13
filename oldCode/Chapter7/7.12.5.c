#include <stdio.h>

int main (void)
{
    int even_num,sum_even,odd_num,sum_odd,num;
    even_num = sum_even = odd_num = sum_odd = num = 0;
    printf("input a string of number (0 to quit)\n");
    
    while (1)
    {
        scanf("%d",&num);
        if (num == 0) break;
        switch (num % 2)
        {
            case 0:sum_even += num;
            even_num++;
            break;
            case 1:sum_odd += num;
            odd_num++;
            break;
        }
    }
    printf("even_num:%d odd_num:%d\n"
            "average:%d average:%d\n",
            even_num,odd_num,sum_even / even_num,sum_odd / odd_num);
    
    return 0;
}