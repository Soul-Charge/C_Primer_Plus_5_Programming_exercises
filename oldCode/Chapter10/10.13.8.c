#include <stdio.h>

void show_arr2 (int rows,int cols,double ar[rows][cols]);
void copy_arr2 (int rows,int cols,const double sar[rows][cols],double oar[rows][cols]);

int main (void)
{
    double arr1[4][4] = {
        {1.1,1.2,1.3,1.4},
        {2.1,2.2,2.3,2.4},
        {3.1,3.2,3.3,3.4},
        {4.1,4.2,4.3,4.4}
    };
    double arr2[4][4];
    
    copy_arr2(4,4,arr1,arr2);      //copy
    
    printf("arr1:\n");             //show
    show_arr2 (4,4,arr1);
    printf("arr2:\n");
    show_arr2 (4,4,arr2);
    
    system("pause");
    return 0;
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

void copy_arr2 (int rows,int cols,const double sar[rows][cols],double oar[rows][cols]) //复制二维double数组内容(两数组大小相等)
{
    int r;
    int c;
    
    for (r = 0;r < rows;r++)
        for (c = 0;c < cols;c++)
            oar[r][c] = sar[r][c];
        
    return;
}