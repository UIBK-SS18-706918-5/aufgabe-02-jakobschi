#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	long a;
	float exp = 0;
	float summ =1.000;
	int c = 1;
	long f = 1.000; 
	long fakultaet = 1.000;
	float d =1 ;
		


	if( argc == 2) 
	{	

	// Einlesen der Zahl
	a = atof(argv[1]);
		
	//Berechnung der Exponentialfunktion
	do
	{
	d=1;
	fakultaet = 1.000; 
	while (d<c)
	{
 	fakultaet = fakultaet*d; 
	d++;
	}
	printf("%i!= %ld\n",c-1 , fakultaet);
	printf("%ld ^ %i = %ld\n", a, c-1 , f);
	summ = f/fakultaet;	
	printf("f/fakultaet = %f\n", summ);
	exp = exp + summ;
	c++;	
	f = a*f;
	}
	while (c<20);
		

	// Ausgabe
	printf("exp (%ld) = %f\n", a, exp);
	}
	else 
	{
	printf( "es wurde nicht genau 1 Wert eingegeben" );
	}
	return 0;
}
