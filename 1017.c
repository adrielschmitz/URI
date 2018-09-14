#include <stdio.h>

	int main(){
		
	double tempogasto, velocidademedia, automovel;
	double litrosgastos;

	scanf ("%lf", &tempogasto);
	scanf ("%lf", &velocidademedia);
	automovel=12;
	litrosgastos = (tempogasto * velocidademedia)/automovel;

	printf ("%.3lf\n", litrosgastos);

	return 0;

	}