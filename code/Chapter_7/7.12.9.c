#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n);

int main(void)
{
    int limit;

    printf("Enter a positive number: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    putchar('\n');
    system("pause");
    return 0;
}

// 判断一个数是不是素数，是则返回1
bool isPrime(int n)
{
    if (n == 1)
        return 0;
    for (int div = 2; div * div <= n; div++)
        if (n % div == 0)
            return 0;
    return 1;
}