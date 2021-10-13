int double_arr_max_index (const double * ar,int n) //double_arr_max_index(arrayname,size);
{
    int i;
    double temp;
    
    for (i = 0,temp = ar[0];i < n-1;i++)          //找到最大值
        temp = temp < ar[i+1] ? ar[i+1] : temp;
    for (i = 0;i < n;i++)                         //找到最大值索引
        if (ar[i] == temp)
            return i;
}