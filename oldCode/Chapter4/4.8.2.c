//print name Pro
#include <stdio.h>
int main(void)
{
char name[20];
short legth=0;
printf("Enter your name.\n");
scanf("%s",name);
printf("Your name is \"%s\".\n",name);
printf("Your name is \"%20s\".\n",name);
printf("Your name is \"%-20s\".\n",name);
legth=sizeof name;
legth=legth+3;
printf("Your name is \"%*s\".\n",legth,name);
return 0;
}
