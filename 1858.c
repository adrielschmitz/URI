#include <stdio.h>
#define MAX 11234567

int main(void){
	int N, menor = MAX, aux, cont=0, flag=0;
	scanf("%d", &N);
	while(N--){
		cont++;
		scanf("%d", &aux);
		if(aux < menor){
			menor = aux;
			flag = cont;
		}
	}+
	
	printf("%d\n", flag);

	return 0;
}