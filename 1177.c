#include <stdio.h>
#include <stdlib.h>
#define TAM 1000
void preenche_vetor(int vetor[TAM]);

int main(void){
	int vet[TAM], entrada=0, i, flag=1, cont=0;

	preenche_vetor(vet);

	while(flag){
		scanf("%d", &entrada);
		if(entrada >=2 && entrada <=50)
			flag=0;
	}

	for(i=0; i<TAM; i++){
		if(cont < entrada)
			printf("N[%d] = %d\n", vet[i], cont);

	  cont++;

	  	if(cont == entrada)
			cont = 0;
	}

  return 0;
}

void preenche_vetor(int vetor[TAM]){ 
	for(int i=0 ; i<TAM; i++) 
		vetor[i] = i; 
}