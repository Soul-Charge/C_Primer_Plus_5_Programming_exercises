#include <stdio.h>
#include <conio.h>
#define SIZE 5

void copy_arr (const double sar[],double oar[],int n);
void copy_ptr (const double * sar,double * oar,int n);

int main (void)
{
    const double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};
    double target1[SIZE],target2[5];
    int index;
    
    copy_arr (source,target1,SIZE);          //copy
    copy_ptr (source,target2,SIZE);
    
    for (index = 0;index < SIZE;index++)     //show_source
        printf("source[%d] ",index);
    putchar('\n');
    for (index = 0;index < SIZE;index++)
        printf("%10.2f",source[index]);
    putchar('\n');
    
    for (index = 0;index < SIZE;index++)     //show_target1
        printf("target1[%d] ",index);
    putchar('\n');
    for (index = 0;index < SIZE;index++)
        printf("%10.2f",target1[index]);
    putchar('\n');
    
    for (index = 0;index < SIZE;index++)     //show_target2
        printf("target2[%d] ",index);
    putchar('\n');
    for (index = 0;index < SIZE;index++)
        printf("%10.2f",target2[index]);
    putchar('\n');
    
    system ("pause");
    return 0;
}

void copy_arr (const double sar[],double oar[],int n)
{
    int i;
    for (i = 0;i < n;i++)
        oar[i] = sar[i];
    return;
}

void copy_ptr (const double * sar,double * oar,int n)
{
    int i;
    for (i = 0;i < n;i++)
        *(oar++) = *(sar++);
    return;
}
