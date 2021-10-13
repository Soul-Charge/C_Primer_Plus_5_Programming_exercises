#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    int a = 0,b = 100,c = (a + b) / 2,respond;
    
    printf("think a number and I will guss it.\n");
    system("pause");
    do 
    {
        printf("is it %d?(1:yes,2:bigger,3:smaller)\n",c);
        scanf("%d",&respond);
        
        if (respond == 1)
            break;
        else if (respond == 2)
            b = c;
        else if (respond == 3)
            a = c;
        c = (a + b) / 2;
        
    }
    while (1);
    printf("I do it!\n");
    
    return 0;
}