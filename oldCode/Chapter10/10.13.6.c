//使用练习2的复制函数复制double二维数组
#include <stdio.h>
#include <conio.h>

void copy_arr (const double sar[],double oar[],int n);
void show_arr2 (int rows,int cols,double ar[rows][cols]);

int main (void)
{
    double arr1[5][5] = {
        {1.1,1.2,1.3,1.4,1.5},
        {2.1,2.2,2.3,2.4,2.5},
        {3.1,3.2,3.2,3.4,3.5},
        {4.1,4.2,4.3,4.4,4.5},
        {5.1,5.2,5.3,5.4,5.5}
    };
    double arr2[5][5];
    int i;
    
    for (i = 0;i < 5;i++)                       //复制数组内容 执行rows次
        copy_arr(arr1[i],arr2[i],5);            //每次复制cols列
    
    printf("arr1:\n");
    show_arr2(5,5,arr1);                        //显示数组内容
    printf("arr2:\n");
    show_arr2(5,5,arr2);
   
    system("pause");
    return 0;
}

void copy_arr (const double sar[],double oar[],int n)
{
    int i;
    for (i = 0;i < n;i++)
        oar[i] = sar[i];
    return;
}


void show_arr2 (int rows,int cols,double ar[rows][cols])  //显示二维double数组内容
{
    int r;
    int c;
    
    for(r = 0;r < rows;r++)
    {
        for(c = 0;c < cols;c++)
            printf("%6.2lf",ar[r][c]);
        putchar('\n');
    }
    return; 
}