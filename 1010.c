#include <stdio.h>

	int main(){

	int codigopc1, numeropc1, codigopc2, numeropc2;
	float valorunitariopc1, valorunitariopc2, VALORPAGAR;
	scanf ("%d %d %f", &codigopc1, &numeropc1, &valorunitariopc1);
	scanf ("%d %d %f", &codigopc2, &numeropc2, &valorunitariopc2);
	VALORPAGAR = (numeropc1*valorunitariopc1) + (numeropc2*valorunitariopc2);

	printf ("VALOR A PAGAR: R$ %.2f\n", VALORPAGAR);

	return 0;

	}