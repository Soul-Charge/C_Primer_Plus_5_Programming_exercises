//将两者中较大值赋予两者
void larger_of (double * x,double * y)
{
    *x = *y = ( *x > *y ? *x : *y);
}