#include <stdio.h>
#include <stdlib.h>

void praiseMsg(void)
{
    printf("For he's a jolly good fellow!\n");
}

void appendMsg(void)
{
    printf("Which nobody can deny!\n");
}

int main(void)
{
    /* version 1: 简单无脑版
    praiseMsg();
    praiseMsg();
    praiseMsg();
    appendMsg();
    */

    /* version 2: 精简版 */
    for (int n = 0; n < 3;n++)
        praiseMsg();
    appendMsg();

    system("pause");
    return 0;
}