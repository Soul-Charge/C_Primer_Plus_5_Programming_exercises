#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 8

int main(void)
{
    int intarray[ARRAYSIZE];

    // 设置数组的八个元素分别为2的前8次幂
    for (int i = 0; i < ARRAYSIZE; i++) // 遍历数组
    {
        intarray[i] = 2; // 先设置为1次幂
        for (int power = 1; power <= i; power++) // 通过相乘来升幂
            intarray[i] *= 2;
    }

    int i = 0;
    do
    {
        printf("%d ", intarray[i++]);
    } while (i < ARRAYSIZE);

    system("pause");
    return 0;
}