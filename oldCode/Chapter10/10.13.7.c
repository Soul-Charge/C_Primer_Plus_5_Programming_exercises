#include <stdio.h>

void copy_arr (const double sar[],double oar[],int n);

int main (void)
{
    double arr1[7] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0};
    double arr2[3];
    int i;
    
    copy_arr (arr1+2,arr2,3);        //��arr1�ĵ���������Ԫ�ظ��Ƹ�arr2

    for (i = 0;i < 3;i++)      //��ʾarr2Ԫ��
        printf("arr2[%d]=%.1f\n",i,arr2[i]);

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