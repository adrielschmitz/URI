#include <stdio.h>
#include <math.h>
/* "sqrt" é a função que calcula a raiz quadrada de um determinado numero */
/* antes do -Wall quando usar math.h, coloca-se "-lm" */

int main(){

	double x1, x2, y1, y2, distancia;

	scanf ("%lf %lf", &x1, &y1);
	scanf ("%lf %lf", &x2, &y2);
	distancia = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

	printf ("%.4lf\n", distancia);

	return 0;

	}