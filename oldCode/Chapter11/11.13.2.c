void Gets (char * string,int n)
{
    int count;
    char ch = 0;
    for (count = 0;count < n && (ch = getchar()) != ' ' && ch != '\n' && ch != '\t' ;count++,string++)
        *string = ch;
    return;
}