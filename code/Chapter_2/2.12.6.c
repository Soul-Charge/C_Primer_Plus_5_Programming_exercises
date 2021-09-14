#include <stdio.h>
#include <stdlib.h>

void putMsg(void)
{
    printf("Smile!");
}

int main(void)
{
    /* version 1: 简单无脑版 */
    putMsg();
    putMsg(); 
    putMsg();
    printf("\n");
    putMsg(); 
    putMsg();
    printf("\n");
    putMsg();
    printf("\n");

    /* version 2: 简单无脑整齐版
    putMsg();putMsg();putMsg();putchar('\n');
    putMsg();putMsg();putchar('\n');
    putMsg();putchar('\n');
    */
    
    /* version 3: 精简版 
    for (int i = 3; i > 0;i--) //控制打印消息的行数
    {
        for (int j = 0; j < i;j++) //控制每行的列数
            putMsg();              //打印的消息
        putchar('\n');
    }
    */

    system("pause");
    return 0;
}