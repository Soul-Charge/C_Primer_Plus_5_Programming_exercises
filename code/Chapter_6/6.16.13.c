#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 8

int main(void)
{
    double doubleArray1[ARRAYSIZE];
    double doubleArray2[ARRAYSIZE];

    printf("Enter %d double number: ", ARRAYSIZE);
    // 获取八次输入
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        scanf("%lf", doubleArray1 + i);  // 设置第一个数组的元素
        // 设置第二个数组的元素
        // doubleArray2[n] == doubleArray1[n] + doubleArray2[n-1] (n > 0)
        doubleArray2[i] = doubleArray1[i];
        if (i != 0)
            doubleArray2[i] += doubleArray2[i-1];
    }
    // 显示数组的元素
    for (int i = 0; i < ARRAYSIZE; i++)
        printf("%10.4lf", doubleArray1[i]);
    putchar('\n');
    for (int i = 0; i < ARRAYSIZE; i++)
        printf("%10.4lf", doubleArray2[i]);
    putchar('\n');

    system("pause");
    return 0;
}