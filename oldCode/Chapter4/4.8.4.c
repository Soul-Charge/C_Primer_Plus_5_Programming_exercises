//show your name and height
#include <stdio.h>
int main(void)
{
	char name[20];
	short height=0;
	printf("What your name?\n");
	scanf("%s",name);
	printf("How tall are you?\n");
	printf("___(cm)\b\b\b\b\b\b\b");
	scanf("%hd",&height);
	printf("%s,you are %hdm tall.\n",name,height);
	return 0;
}
