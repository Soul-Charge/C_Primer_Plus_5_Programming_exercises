#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int preChar = -1; // 前一个字符
    char curChar; // 当前字符
    int seqCount = 0; // ei序列出现的次数

    printf("Enter something: \n");
    while ((curChar = getchar()) != '#')
    {
        if ((preChar != -1) && curChar == 'i' && preChar == 'e')
            seqCount++;
        preChar = curChar;
    }
    printf("The \"ei\" has appeared %d times.\n", seqCount);

    system("pause");
    return 0;
}