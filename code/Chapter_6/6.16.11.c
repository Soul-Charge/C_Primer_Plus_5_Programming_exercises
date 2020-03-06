/* 
不是很懂书中的提示：
奇数个-1相乘是-1，偶数个-1相乘是1
*/
#include <stdio.h>
#include <stdlib.h>

/*  mode != 0 为加法模式
    mode == 0 为加减混合模式
*/
double sum(int place, int mode)
{
    double sum = 0;

    for (int i = 1; i <= place; i++)
    {
        if (mode) // 纯加法
            sum += 1.0 / (double)i;
        else
        {
            if (i % 2) // 能被2整除为偶数
                sum += 1.0 / (double)i;
            else
                sum -= 1.0 / (double)i;
        }
    }

        return sum;
}

int main(void)
{
    int place;

    puts("1.0 + 1.0/2.0 + 1.0/3.0 + ...");
    puts("1.0 - 1.0/2.0 + 1.0/3.0 - ...");
    printf("Enter the end place (q to quit):  ");
    while (scanf("%d", &place))
    {
        if (place == 1)
        {
            printf("Are you sure? enter again: ");
            continue;
        }
        printf("1.0 + ... + %d.0 = % .5lf\n", place, sum(place, 1));
        printf("1.0 - ... - %d.0 = % .5lf\n", place, sum(place, 0));
        puts("-----------------------------");
        puts("1.0 + 1.0/2.0 + 1.0/3.0 + ...");
        puts("1.0 - 1.0/2.0 + 1.0/3.0 - ...");
        printf("Enter next end place (q to quit): ");
    }

    return 0;
}