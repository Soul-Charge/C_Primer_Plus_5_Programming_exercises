double double_arr_max_difference (const double * ar,int n) //double_arr_max_difference(arrayname,size);
{
    int i;
    double max,min;
    
    for (i = 0,max = ar[0];i < n-1;i++)          //�ҵ����ֵ
        max = max < ar[i+1] ? ar[i+1] : max;
        
    for (i = 0,min = ar[0];i < n-1;i++)          //�ҵ���Сֵ
        min = min > ar[i+1] ? ar[i+1] : min;
    
    return (max - min);
}