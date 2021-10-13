#include <stdio.h>
#define A_O_I 100
//amount of investment

int main (void)
{
	double Deirdre,Daphne;
	short years = 0;
	
	Daphne = Deirdre = 100;
	do
	{
		Daphne += A_O_I * 0.1;
		Deirdre += Deirdre * 0.05;
		years++;
	}
	while (Deirdre < Daphne);
	printf ("Daphne have %f$,"
	        "Deirdre have %f$\n"
	        "after %d years",
			Daphne,Deirdre,years);
	
	return 0;
}