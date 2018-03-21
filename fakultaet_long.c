#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	long a, b;

	if( argc == 2) 
	{	
	// Einlesen der Seitenlängen
	a = atof(argv[1]);
	b = a;
			
	// Berechnung der Oberfläche
	long Fakultaet = 1;
	while(a>1) 
	{
	Fakultaet = Fakultaet*a;
	a--;
	}
	

	// Ausgabe
	printf("Die Fakultät von %i ist %li\n", b, Fakultaet);
	}
	else 
	{
	printf( "es wurde nicht genau 1 Wert eingegeben" );
	}
	return 0;
}
