#include <stdio.h>
#include <string.h>

int main(void){
	char vet[25], aux;
	scanf("%s", vet);
	int tamanho = strlen(vet), i, j;
	for(j=tamanho-1, i=0; i < tamanho/2; i++, j--){
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
	printf("%s\n", vet);
  return 0;
}