#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LOOP 1000
#define SIZE 10

int main (void)
{
    srand(time(0));
    int i,num,total;
    int count[SIZE] = {0};
    
    for (i = 0;i < LOOP;i++)
    {
        num = rand() % 10;
        
        switch (num)
        {
            case 0:count[0]++;break;
            case 1:count[1]++;break;
            case 2:count[2]++;break;
            case 3:count[3]++;break;
            case 4:count[4]++;break;
            case 5:count[5]++;break;
            case 6:count[6]++;break;
            case 7:count[7]++;break;
            case 8:count[8]++;break;
            case 9:count[9]++;break;
        }
    }
    
    for (i = 0,total = 0;i < SIZE;i++)
    {
        printf("There are %5d '%c',  the probability is %%%5.3f\n",
            count[i],'0'+i,(double)count[i] / LOOP * 100);
        total += count[i];
    }
    printf("There are %d number\n",total);
    
    system("pause");
    return 0;
}