// cm to inch feet
#include <stdio.h>
#define C_P_I 2.54 
#define I_P_F 12     
/* C=CM  P=PER
 *  I=INCH  F=FEET
*/
int main (void)
{
	float cm,inch,F_feet;
	int feet;
	printf("Enter a height in centimeters");
	printf(": ");
	scanf("%f",&cm);
	F_feet = cm/C_P_I/I_P_F;
	feet = cm/C_P_I/I_P_F;
	inch = (F_feet - feet)*I_P_F;
	printf("%.1f cm = %d feet, %.1f inches",
	cm,feet,inch);
	printf("\nEnter a height in "
		       "centimeters (<=0 to quit): ");
		scanf("%f",&cm);
	while (cm>0) {
		F_feet = cm/C_P_I/I_P_F;
		feet = cm/C_P_I/I_P_F;
		inch = (F_feet - feet)*I_P_F;				         printf("%.1f cm=%d feet,%.1f inches"
		,cm,feet,inch);
		printf("\nEnter a height in "
		       "centimeters (<=0 to quit): ");
		scanf("%f",&cm);
	}
	printf("bye\n");
	return 0;
}