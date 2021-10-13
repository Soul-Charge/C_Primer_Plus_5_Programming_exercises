//自己的pow()函数power() 递归算法
double power (double a,double x)
{
    double ans = 1;
    
    if (a == 0)
        ans = 0;
    else if( x > 0 )
    {
       ans = a * power(a,x - 1);
    }
    else if (x == 0)
        ans = 1;
    else if (x < 0)
    {
        x = -x;
        ans = a * power(a,x - 1);
            ans = 1 / ans;
    }
    return ans;
}