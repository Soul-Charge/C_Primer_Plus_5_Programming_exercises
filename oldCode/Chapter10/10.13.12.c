//2019.5.3 前来再次挑战
//设计时间 01:41:25
//编码时间03:07:51
//没想到编码时间居然还是多出设计这么多，主要是中间出问题了。
//二维数组的传统用法我没用，而是自己搞了个。还有scanf()的沙雕小问题:读取double值要用%lf
//一开始感觉很难受的，但最后完成了，而且感觉做的很好。我还是有很大进步的。
// ヾ(^∀^)ﾉ
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

void get_numbers(double arr[][COLS] ,int rows);
void av_foreach (double arr[][COLS] ,int rows);
void av_total (double arr[][COLS] ,int rows ,double * av);
void find_max (double arr[][COLS] ,int rows ,double * max);

int main(void)
{
    double array[ROWS][COLS] = {0};
    double av = 0;
    double max = 0;

    get_numbers(array,ROWS);
    av_foreach(array,ROWS);
    av_total(array,ROWS,&av);
    find_max(array,ROWS,&max);

    printf("The global average is %20.2f\n",av);
    printf("The max is            %20.2f\n",max);

    system("pause");
    return 0;
}

void get_numbers(double arr[][COLS] ,int rows) //这里之前犯了个错：指向数组的指针要明确被指向数组的长度
{
    int r,c;
    for (r = 0;r < rows;r++) //input
    {
        printf("Enter numbers in line %d\n",r + 1);
        for (c = 0;c < COLS;c++)
        {
            scanf("%lf",&arr[r][c]);
        }
    }

    printf("\nYour set is:\n");

    for (r = 0;r < rows;r++) //show
    {
        for (c = 0;c < COLS;c++)
        {
            printf("%10.2f ",arr[r][c]);
        }
        putchar('\n');
    }
}

void av_foreach (double arr[][COLS] ,int rows)
{
    int r,c;
    double total;
    for (r = 0;r < rows;r++)
    {
        for (c = 0,total = 0;c < COLS;c++)
        {
            total += arr[r][c];
        }
        printf("line %d,average:       %20.2f\n",r+1,total / COLS);
    }
}

void av_total (double arr[][COLS] ,int rows ,double * av)
{
    int r,c;
    double total = 0;
    for (r = 0;r < rows;r++)
    {
        for (c = 0;c < COLS;c++)
        {
            total += arr[r][c];
        }
    }
    *av = total / (rows * COLS);
}

void find_max (double arr[][COLS] ,int rows ,double * max)
{
    int r,c;
    for (r = 0;r < rows;r++)
    {
        for (c = 0;c < COLS;c++)
        {
            *max < arr[r][c] ? *max = arr[r][c] : *max;
        }
    }
}