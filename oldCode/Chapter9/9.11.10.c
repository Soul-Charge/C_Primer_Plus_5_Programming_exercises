//斐波那契数列循环算法
unsigned long long Fibonacci (unsigned long long n)
{
    if ( n < 2 )
        return 1;
    else
    {
        int i;
        unsigned long long f[n];
        f[0] = f[1] =1;
        for ( i = 0;i < n - 1;i++ )
        {
            f[i + 2] = f[i ] + f[i + 1];
        }
        return f[i];
    }
}