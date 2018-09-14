// Faça um algoritmo que mostre quantos números primos existem entre 1 e N ( N é uma entrada)
#include <stdio.h>
#include <stdlib.h>
void acha_primos(int n);
int main(void){
	int n;
	scanf("%d", &n);
	acha_primos(n);
  return 0;
}
void acha_primos(int n){
	int i, j, aux=0, cont=0;

	for(i=2; i<=n; i++){
		for(j=2; j<=i; j++){
			if(i%j == 0) 
				aux++;
			if(aux==2) 
				break;
		}
		if(aux == 1){
			//printf("%d\n", i);
			cont++;
		}
	  aux = 0;
	}
  printf("No intervalo entre 1 e %d existem %d número(s) primo(s)!\n", n, cont);
}