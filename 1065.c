#include <stdio.h>
#include <stdlib.h>

int main(){

	int vet, i, vlpar;

	for (i=0 ; i<5 ; i++){
		scanf("%d", &vet);

		if (vet %2 == 0) {
			vlpar++;
		}
	}	
	printf ("%d valores pares\n", vlpar);
	
	return 0;
}