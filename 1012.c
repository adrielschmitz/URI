#include <stdio.h>

	int main(){
	float A, B, C; 
	double pi, areatriangulo, areacirculo, areatrapezio, areaquadrado, arearetangulo;
	scanf ("%f %f %f",&A, &B, &C);
	pi = 3.14159;
	areatriangulo = (A*C)/2;
	areacirculo = pi*(C*C); 
	areatrapezio = (A+B)*C /2;
	areaquadrado = B * B;
	arearetangulo = A * B;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areatriangulo, areacirculo, areatrapezio, areaquadrado, arearetangulo);

	return 0;
	}