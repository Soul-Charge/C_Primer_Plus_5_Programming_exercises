/* 弄成了自定义打印字符队列的模式 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char letter; //用户输入的字符
    char * letterPos; //输入字符在列表位置的指针
    const char charList[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //const char charList[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //const char charList[] = {"1234567890"};
    //const char charList[] = {"1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};


    printf("Enter a letter: ");
    scanf("%c", &letter);
    if ((letterPos = strchr(charList, letter)) == NULL)
    {
        printf("请输入属于字符列表的的字符\n");
        system("pause");
        return 0;
    }

    for (int rows = 0; charList+rows <= letterPos; rows++)
    {
        /* 处理空格 */
        for (int spaceNum = rows; charList+spaceNum < letterPos; spaceNum++)
            putchar(' ');
        /* 升序打印字母 */
        for (int upper = 0; upper <= rows; upper++)
            putchar(charList[upper]);
        /* 降序打印字母 */
        for (int lower = rows-1; lower >= 0; lower--)
            putchar(charList[lower]);
        putchar('\n');
    }

    system("pause");
    return 0;
}