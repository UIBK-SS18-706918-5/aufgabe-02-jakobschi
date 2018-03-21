#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a, b;

	if( argc == 2) 
	{	
	// Einlesen der Seitenlängen
	a = atof(argv[1]);
	b = a;
			
	// Berechnung der Oberfläche
	int Fakultaet = 1;
	while(a>1) 
	{
	Fakultaet = Fakultaet*a;
	a--;
	}
	

	// Ausgabe
	printf("Die Fakultät von %i ist %i\n", b, Fakultaet);
	}
	else 
	{
	printf( "es wurde nicht genau 1 Wert eingegeben" );
	}
	return 0;
}
