//print name and number.
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name1[20];
	char name2[20];
	short number1=0;
	short number2=0;
	printf("Enter your first name.\n");
	scanf("%s",name1);
	printf("Enter your second name.\n");
	scanf("%s",name2);
//output
	printf("%s %s\n",name1,name2);
	number1=strlen(name1);
	number2=strlen(name2);
	printf("%*hd ",number1,number1);
	printf("%*hd\n",number2,number2);
//agin
	printf("%s %s\n",name1,name2);
	printf("%-*hd ",number1,number1);
	printf("%-*hd\n",number2,number2);
	return 0;
}
