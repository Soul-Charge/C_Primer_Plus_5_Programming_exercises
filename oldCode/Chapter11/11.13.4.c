char * Strchr (char * str,char ch)
{
    while (*str++ != '\0')
        if (*str == ch)
            return str;
    return NULL;
}