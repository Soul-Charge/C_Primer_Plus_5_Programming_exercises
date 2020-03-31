#include <stdio.h>
#include <stdlib.h>

unsigned long Fibonacci(unsigned int n);

int main(void)
{
    for (int i = 0; i < 30; i++)
        printf("%ld ", Fibonacci(i));

    system("pause");
    return 0;
}

unsigned long Fibonacci(unsigned int n)
{
    unsigned long prePreVal = 1; // 前两位的值
    unsigned long preVal    = 1; // 前一位的值
    unsigned long curVal;        // 当前值

    if (0 == n)
        return 0;
    if (n < 3)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        curVal = prePreVal + preVal;
        prePreVal = preVal;
        preVal = curVal;
    }
    return curVal;
}