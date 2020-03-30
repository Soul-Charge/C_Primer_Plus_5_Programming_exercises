#include <stdio.h>
#include <stdlib.h>

void DecimalToBaseN(int number, unsigned short base);

int main(void)
{
    int number, base;

    puts("Enter two number(0 to quit): ");
    while (scanf("%d %d", &number, &base) == 2)
    {
        while (getchar() != '\n') // 清空输入为下一次接收
            continue;
        if (0 == number || 0 == base)
            break;
        else if (base > 10 || base < 2)
        {
            puts("进制转换限制:2 - 10");
            puts("Enter two number(0 to quit): ");
            continue;
        }
        DecimalToBaseN(number, base);
        putchar('\n');
        puts("Enter two number(0 to quit): ");
    }
    return 0;
}

// 十进制数转n进制
// number:待转换的十进制数
// base  :n进制基数
void DecimalToBaseN(int number, unsigned short base)
{
    int r = number % base; // 余数
    if (number >= base)
        DecimalToBaseN(number / base, base);
    printf("%d",r);
    return;
}