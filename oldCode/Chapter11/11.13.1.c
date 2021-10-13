void Gets (char * string,int n)
{
    int count;
    for (count = 0;count < n;count++,string++)
        *string = getchar();
    return;
}