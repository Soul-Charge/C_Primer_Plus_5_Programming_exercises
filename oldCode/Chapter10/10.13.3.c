//返回int数组中最大值
int int_arr_max (int * ar,int n) //int_arr_max(arrayname,size);
{
    int i,temp;
    for (i = 0,temp = ar[0];i < n-1;i++)
        temp = temp < ar[i+1] ? ar[i+1] : temp;
    return temp;
}