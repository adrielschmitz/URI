#include <stdio.h>
int main(){

	int entrada, i, j;
	scanf ("%d", &entrada);

	if (entrada<5 && entrada>2000) {
		printf ("Entrada Inválida\n");
	} else { 
		for (i=2 ; i<=entrada ; i++){
			if (i%2==0) {
				j = i;
				printf ("%d^2 = %d\n", i, j*j);
			}
		}	
	}
	return 0;
}