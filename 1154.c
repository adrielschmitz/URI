#include <stdio.h>

int main(){
	int idade=0, aux=0;
	double media, cont=0;
	while(idade>=0){
		scanf("%d", &idade);
		if(idade>0){
			aux += idade;
			cont++;
		}
	}
	printf("%.2lf\n", media = aux/cont);

	return 0;
}