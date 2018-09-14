#include <stdio.h>

int main (){

	double a, b, c, perimetro, area;
	scanf("%lf %lf %lf", &a, &b, &c);

	if (c<(a+b) && b<(a+c) && a<(b+c)) 
		printf("Perimetro = %.1lf\n", perimetro = (a+b+c));

	else
		printf ("Area = %.1lf\n", area = ((a+b)*c)/2);
	

	return 0;

}