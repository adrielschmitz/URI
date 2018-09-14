#include <stdio.h>
int main(){

	int entrada,i;
	double a, b, c, soma;
	scanf ("%d", &entrada);
		for (i=0 ; i<entrada ; i++){
			scanf ("%lf%lf%lf", &a, &b, &c);
			a=(a*2)/10;
			b=(b*3)/10;
			c=(c*5)/10;		
		 printf ("%.1lf\n", soma = a+b+c);	
		}
		

	return 0;
}