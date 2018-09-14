#include <stdio.h>

int main(){
	int distanciatotal;
	double combustivelgasto, consumo;
	scanf ("%d", &distanciatotal);
	scanf ("%lf", &combustivelgasto);
	consumo = (distanciatotal/combustivelgasto);

	printf ("%.3lf km/l\n",consumo);

	return 0;


}