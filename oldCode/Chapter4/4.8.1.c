//print name
#include <stdio.h>
int main(void)
{
char name1[20];
char name2[20];
printf("Enter your first name.\n");
scanf("%s",name1);
printf("Enter your second name.\n");
scanf("%s",name2);
printf("So your name is %s,%s.\n",
           name1,name2);
return 0;
}
