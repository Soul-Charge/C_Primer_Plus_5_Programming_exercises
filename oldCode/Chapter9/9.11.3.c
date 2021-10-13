//打印i个n行指定字符
void showch (char ch,int i,int n)
{
    int col,k;
    
    for (col = 0;col < n;col++)
    {
        for (k = 0;k < i;k++)
            putchar(ch);
        putchar('\n');
    }
    
}