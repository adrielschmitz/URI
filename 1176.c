#include <stdio.h>
#include <stdlib.h>

void preenche_vetor(long long int vet[]);
void procura(long long int vet[], int posicao);

int main(void){
	long long int vet[61] = {0};
	int posicao=0, aux=0, repeticoes=0;
	
	preenche_vetor(vet);
	scanf("%d", &repeticoes);
	while(aux < repeticoes){
		scanf("%d", &posicao);
		if(posicao>=0 && posicao<=60){
			procura(vet, posicao);
			aux++;
		}
	}
  return 0;
}
void preenche_vetor(long long int vet[]){
	long long int a=0, b=1;
	int i=2;

	vet[0] = 0;
	vet[1] = 1;
	for( ; i<=60; i++){
		vet[i] = a+b;
		a = b;
		b = vet[i];
	}
}
void procura(long long int vet[], int posicao){
	int i=0;
	for( ; i<posicao; i++);

	printf("Fib(%d) = %lld\n", i, vet[i]);
}