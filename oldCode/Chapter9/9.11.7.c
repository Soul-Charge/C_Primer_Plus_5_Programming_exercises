//�Լ���pow()����power() ѭ���㷨
double power (double a,double x)
{
    double ans = 1;
    int i; //i ֻ��һ��������
    
    if (a == 0)
        ans = 0;
    else if( x > 0 )
    {
        for (i = 0;i < x;i++)
            ans *= a;
    }
    else if (x == 0)
        ans = 1;
    else if (x < 0)
    {
        x = -x;
        for (i = 0;i < x;i++)
                ans *= a;
            ans = 1 / ans;
    }
    return ans;
}