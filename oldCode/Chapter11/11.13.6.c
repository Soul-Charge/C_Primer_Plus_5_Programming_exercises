char * Strncpy (char * str1,char * str2,int n)
{
    int i;
    for (i = 0;str2[i] != '\0' && i <= n-1;i++)
        str1[i] = str2[i];
    return str1;
}