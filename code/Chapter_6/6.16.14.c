// 本来想直接用gets()的，看了书的提示想起到这一章还没学字符串函数
// 可是好像还有很多也没学的，算了随便写了
#include <stdio.h>
#include <stdlib.h>
#define LINESIZE 255

int main(void)
{
    int i = 0; // 循环计数器
    char c;    // 存放当前字符的临时变量
    char line[LINESIZE]; // 字符数组，不是字符串

    printf("Enter something casual: ");
    // 将输入存入数组
    scanf("%c", &c);
    while (c != '\n')
    {
        if (i >= LINESIZE)
            break;
        line[i++] = c;
        scanf("%c", &c);
    }
    // 反向打印数组元素
    while (i >= 0)
        printf("%c", line[--i]);
    printf("\n");

    system("pause");
    return 0;
}