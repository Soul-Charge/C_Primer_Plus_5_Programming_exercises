// °F to °c and K
#include <stdio.h>
#include <conio.h>
void Temperatures (double Fahrenheit);
int main (void)
{
	double F;
	
	printf("input a Temperatures in °F");
	printf("(float)\n:");
	scanf("%lf",&F);
	
//	printf(" test %d %f",F,F);
//	getch();
	
	while (F>0) {
		Temperatures(F);
		F = 0;
		scanf("%lf",&F);
	}
	printf("bye\n");
	
	return 0;
}

void Temperatures (double Fahrenheit)
{
	double Celsius,Kelvin;
	
	const float E_C = 1.8;
	const float ADD = 32.0;
	const float K = 273.16;
	
	Celsius = E_C * Fahrenheit +ADD;
	Kelvin = Celsius * K;
	
	printf("%.2f °F = %.2f °C = %.2f K.\n",
		Fahrenheit,Celsius,Kelvin);
		
	printf("Continue (word to quit):");
}