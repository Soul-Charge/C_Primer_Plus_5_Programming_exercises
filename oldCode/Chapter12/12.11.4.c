#include <stdio.h>
#include <stdlib.h>

int call_count ();

int main(void)
{
    int n,call;
    n = call = 0;
    
    do
    {
        fputs("Enter number of call (0 to quit): ",stdout);
        scanf("%d",&n);
        
        for (int i = 0;i < n;i++)
        {
            call = call_count();
            printf("You have called me %d.\n",call);
        }
    }
    while (n);
    
    system("pause");
    return 0;
}
//这是题目要的函数
int call_count ()
{
    static int call = 0;
    return ++call;
}