#include <stdio.h>

int main(){

	float vet[6], media=0;
	int i, valorp=0;

	for (i=0 ; i<6 ; i++) {
		scanf("%f", &vet[i]); 
		if (vet[i]>=0) {
			valorp++;
			media += vet[i];
		}
		
	}
		media = media/valorp;
		
		printf("%d valores positivos\n%.1f\n", valorp, media);

	return 0;
}
