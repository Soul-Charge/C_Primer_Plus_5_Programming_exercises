#include <stdio.h>
#define ROWS 3
#define COLS 5

void squ_arr (int rows,int cols,int ar[rows][cols]);
void show_arr2 (int rows,int cols,const int ar[rows][cols]);


int main (void)
{
    int arr[ROWS][COLS] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    
    printf("arr:\n");
    show_arr2 (ROWS,COLS,arr);
    squ_arr (ROWS,COLS,arr);
    printf("new arr:\n");
    show_arr2 (ROWS,COLS,arr);
    
    system ("pause");
    return 0;
}

void squ_arr (int rows,int cols,int ar[rows][cols])  //翻倍二维数组内容
{
    int r,c;
    
    for (r = 0;r < rows;r++)
        for (c = 0;c < cols;c++)
            ar[r][c] *= 2;
        
    return;
}



void show_arr2 (int rows,int cols,const int ar[rows][cols])  //显示二维int数组内容
{
    int r;
    int c;
    
    for(r = 0;r < rows;r++)
    {
        for(c = 0;c < cols;c++)
            printf("%d ",ar[r][c]);
        putchar('\n');
    }
    return; 
}