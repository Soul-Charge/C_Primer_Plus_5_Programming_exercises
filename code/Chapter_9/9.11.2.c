#include <stdio.h>
#include <stdlib.h>

void chline(char ch, int i, int j);

int main(void)
{
    int i, j;
    for (i = j = 1; i <= 100; i++, j++)
    {
        chline('#', i, j);
        putchar('\n');
    }
    system("pause");
    return 0;
}

// 指定字符在i列到j列的的输出
void chline(char ch, int i, int j)
{
    // 打印空格
    for (int n = 1; n < i; n++)
        putchar(' ');
    // 打印字符
    for (int n = i; n <= j; n++)
        putchar(ch);
}