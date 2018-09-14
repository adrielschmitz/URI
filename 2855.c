#include <stdio.h>

int main(void){
	int n, cont=1, escolha;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &vet[i]);
	
	scanf("%d", &escolha);

	for(i=0; i<n; i++)
		printf("[%d]:%d\n", i, vet[i]);

	if(vet[escolha] != -1)
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}