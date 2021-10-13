#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argc,char * argv[])
{
    double base = atof(argv[1]);
    int index = atoi(argv[2]);
    
    printf("%lf\n",pow(base,index));
    
    return 0;
}