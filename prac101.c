#include <stdio.h>
int main ()
{
	float yards;
	float feet;
	float meters;
	float inches;
	float cm;
		printf ("Enter length in yards:");
		scanf ("%f", &yards);
	feet = yards * 3;
	inches = feet * 12;
	cm = inches * 2.54;
	meters = cm / 100;
		printf ("\nFeet is equal to:%.2f", feet);
		printf ("\nMeters is equal to:%.2f", meters);
		printf ("\nInches is equal to:%.2f", inches);
		printf ("\nCentimeters is equal to:%.2f\n", cm);
	
	return 0;
}

