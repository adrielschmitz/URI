#include <stdio.h>
#include <math.h>

	int main(){

		int raio;
		double pi;
		double volume;
		scanf ("%d", &raio);
		pi = 3.14159;
		volume = (4.0/3) * pi * raio * raio * raio;

		printf ("VOLUME = %.3lf\n", volume);

		return 0;


	}