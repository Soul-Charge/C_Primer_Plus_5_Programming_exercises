//求前n个整数的平方的和
#include <stdio.h>
int main (void)
{
	int count,n,sum;
	count = 0;
	sum = 0;
	printf("求前___个整数平方的和\b\b"
	    "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%d",&n);
	while (count++ <n)
		sum = sum + count*count;
	printf("sum = %d\n",sum);
	return 0;
}