/* 弄成了自定义打印字符队列的模式 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LINESIZE 20 //命令行的长度

bool colorON = true;

int main(void)
{
    char letter; //用户输入的字符
    char * letterPos; //输入字符在列表位置的指针
    char colorList[] = {"4e62915"}; //cmd的颜色序列码，按照彩虹颜色顺序
    //const char charList[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //const char charList[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //const char charList[] = {"1234567890"};
    const char charList[] = {"1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};


    printf("Enter a letter: ");
    scanf("%c", &letter);
    if ((letterPos = strchr(charList, letter)) == NULL)
    {
        printf("请输入属于字符列表的的字符\n");
        system("pause");
        return 0;
    }

    int currentColor = 0; //当前的颜色
    int lines = (int)(letterPos - charList); //计算总共将要打印的行数
    int divideVal = lines / 7; //变换一次颜色的行数
    if (lines < 7) //行数小于7关闭效果
        colorON = false;

    for (int rows = 0; charList+rows <= letterPos; rows++)
    {
        /* 切换当前颜色 */
        if (rows != 0 && rows % divideVal == 0)
            currentColor++;

        /* 生成与执行颜色切换命令 */
        char colorLine[LINESIZE]; //存储命令行
        sprintf(colorLine, "color %c", colorList[currentColor]);
        system(colorLine);

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