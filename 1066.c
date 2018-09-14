#include <stdio.h>

int main(){

	int vet[5], i, par=0, impar=0, positivo=0, negativo=0;

		for (i=0 ; i<5 ; i++) {
			scanf("%d", &vet[i]);

			if (vet[i]%2==0)
				par++;
			if (vet[i]%2!=0)
				impar++;
			if (vet[i]>0)
				positivo++;
			if (vet[i]<0)
				negativo++;
			
		}

		printf ("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);



	return 0;
}