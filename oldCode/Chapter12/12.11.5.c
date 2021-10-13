#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void)
{
    int random[SIZE];
    int i,seek;
    int * p [SIZE];
    int * temp;
    p[0] = random;
    srand(time(0));
    
    //initial array
    for (i = 0;i < SIZE;i++)
    {
        random[i] = rand() % 11;
        p[i] = random+i;
    }
    
    //sort by lower
    for (i = 0;i < SIZE;i++) //从第一个元素开始
        for (seek = i+1;seek < SIZE;seek++) //轮流与开始元素比较
        {
            if ( *(p[i]) < *(p[seek]) ) //降序
            {
                temp = p[i];
                p[i] = p[seek];
                p[seek] = temp;
            }
        }
    //show source array
    for (i = 0;i < SIZE;i++)
        printf("[%d] = %d\n",i,random[i]);
    putchar('\n');
    
    //show sort array
    for (i = 0;i < SIZE;i++)
        printf("[%d] = %d\n",i,*p[i]);
    
    system("pause");
    return 0;
}