#include <stdio.h>
#define ROWS 3
#define COLS 5

void get_double_arr2 (int rows,int cols,double ar[rows][cols]);
void show_averages (int rows,int cols,const double ar[rows][cols]);

int main (void)
{
    double arr[ROWS][COLS];
    
    get_double_arr2(ROWS,COLS,arr);  //瀛樺偍杈撳叆
    show_averages(ROWS,COLS,arr);  //璁＄畻杈撳嚭姣忎釜鏁伴泦骞冲潎鍊?    //璁＄畻杩斿洖鎬诲钩鍧囧€?    //杩斿洖鏈€澶у�?    
    system("pause");
    return 0;
}

void get_double_arr2 (int rows,int cols,double ar[rows][cols])
{
    int r,c;
    
    printf("\n",rows,cols,rows);
  
    for (r = 0;r < rows;r++)  
    {
        printf("%d:",r+1);
        for (c = 0;c < cols;c++)
            scanf("%lf",&ar[r][c]);
    }
    return;
}

void show_averages (int rows,int cols,const double ar[rows][cols])
{
    int r,c;
    double subtot;
    
    for (r = 0;r < rows;r++)
    {
        for (c = 0,subtot = 0;c < cols;c++)
            subtot += ar[r][c];
        printf("average of row_%d is :%lf\n",r,subtot/cols);
    }
    return;
}