//指定字符在i列 到j列的输出
void chline (char ch,int i,int j)
{
    int k;
    
    for (k = 0;k < i - 1;k++)
        putchar(' ');
    for (k = i; k <= j;k++)
        putchar(ch);
    
}