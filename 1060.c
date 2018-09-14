#include <stdio.h> 
#include <stdlib.h>

int main (void){

	float vet;
	int i, valorP = 0;
	
	for (i=0 ; i<6 ; i++) {
		scanf ("%f", &vet);

		if (vet>=0.0) {
			valorP++;
		} 
	}
	printf ("%d valores positivos\n", valorP);
	
	return 0;
}