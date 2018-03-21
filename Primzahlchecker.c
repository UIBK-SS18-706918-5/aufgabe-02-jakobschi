#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a, b;

	if( argc == 2) 
{	
	// Einlesen der Zahl
	a = atof(argv[1]);
	b = a;
			
	// Berechnung der Oberfläche
	int c = 1;
	int i = 0;
	while (c<a)
	{
	c++;
	if (a%c == 0)
	{
	break;
	}
	else
	{
	i++;
	}
	}
	

	// Ausgabe
	if (a == i+2)
	{
	printf("Die Zahl %i ist eine Primzahl", b);
	}
	else
	{
	printf("Die Zahl %i ist keine Primzahl", b);
	}
}
	else 
	{
	printf( "es wurde nicht genau 1 Wert eingegeben" );
	}
	return 0;
}
