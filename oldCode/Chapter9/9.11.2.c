//ָ���ַ���i�� ��j�е����
void chline (char ch,int i,int j)
{
    int k;
    
    for (k = 0;k < i - 1;k++)
        putchar(' ');
    for (k = i; k <= j;k++)
        putchar(ch);
    
}