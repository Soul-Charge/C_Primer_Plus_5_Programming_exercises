#include <math.h>
int my_atoi (char * str)
{ //under ASCII 
    int total = 0,size = 0,i;
    int number[50];
    for (i = 0;*str != '\0';str++)
    {
        if ( isdigit(*str) )
        {
            number[i++] = *str - 48;
            size++;
        }
    }
    for (i = 0;i < size;i++)
        total += number[i] * pow(10,size-i-1);
    
    return total;
}