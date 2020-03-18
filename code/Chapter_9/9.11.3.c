#include <stdio.h>
#include <stdlib.h>

void PutChRowsN(char ch, int rows, int n);

int main(void)
{
    for (int i = 0; i < 50; i++)
        PutChRowsN('0' + i, i, i);
    system("pause");
    return 0;
}

// 打印指定的字符rows行，每行n个
void PutChRowsN(char ch, int rows, int n)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < n; j++)
            putchar(ch);
        putchar('\n');
    }
}