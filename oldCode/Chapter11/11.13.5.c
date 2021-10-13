int is_within (char * str,char ch)
{
    while (*str++ != '\0')
        if (*str == ch)
            return 1;
    return 0;
}