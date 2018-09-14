#include <stdio.h>

int main(){

	int entrada, quantidade=0;
	scanf ("%d", &entrada);
 
	do {
		entrada++;
		if (entrada%2!=0) {
			printf ("%d\n", entrada);
			quantidade++;
		}
	
	} while (quantidade<6);

	return 0;
}