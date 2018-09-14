#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
int main(){
	int vet[MAX], i, menor=0, posicao;
	for(i=1; i<=MAX; i++){
		scanf ("%d", &vet[i]);
			if (vet[i]>menor){
				menor = vet[i];
				posicao = i;
			}
	}
	printf ("%d\n%d\n", menor, posicao);
	
	return 0;
}