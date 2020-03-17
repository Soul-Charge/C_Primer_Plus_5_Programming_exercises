#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char GetFirstChar(void);

int main(void)
{
    puts("Enter something: ");
    printf("The first character is: %c\n", GetFirstChar());
    system("pause");
    return 0;
}

// 从输入中获取第一个非空白字符
char GetFirstChar(void)
{
    char ch;

    while (isspace(ch = getchar())) // 是空白字符就继续获取
        continue;
    while (getchar() != '\n') // 清除之后的输入
        continue;
    return ch;
}