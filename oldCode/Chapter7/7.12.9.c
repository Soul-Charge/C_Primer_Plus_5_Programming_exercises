//ÕÒËØÊı
#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int num,i,j;
    bool isprime = 1;
    
    printf("Input a number:");
    scanf("%d",&num);
    
    for (i = 2;i <= num;i++)
    {
        for(j = 2;j < i;j++)
        {    
            if (i % j == 0)
                isprime = 0;
        }
        if (isprime)
            printf("%d ",i);
        isprime = 1;
    }
    
    return 0;
}