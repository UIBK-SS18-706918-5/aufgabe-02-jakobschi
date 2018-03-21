#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float a;

	// Einlesen der Zahl
	a = atof(argv[1]);
	
	//Vorzeichen bestimmen
	if (a<0)
	 {
			printf( "a ist negativ" ); 
        	}
	else if (a==0) 
	{
		printf( "a = 0");
	} 
	else { 
	printf( "a ist positiv"); 
	}
	

	return 0;
}
