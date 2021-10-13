/*count mile per gallon 
    and L per 100KM
*/
#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609
int main(void)
{
	float s=0; // distance
	float f=0; // the fuel gas
	printf("How far did you move?\n");
	printf("_______(mile)\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%f",&s);
	printf("How much gas did you lost?\n");
	printf("_______(gallon)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%f",&f);
	printf("You can move %.1fmile per lost 1 gallon gas.\n",s/f);
	printf("You will lost %.1fL gas per 100KM.\n",  //f/s    s=s*MILE   f=f*GALLON
	f*GALLON/(100*s*MILE));
	return 0;
}

	
