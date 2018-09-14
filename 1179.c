#include <stdio.h>
#include <stdlib.h>

void imprime_par(int par[]);
void imprime_impar(int impar[]);

int main(void){
	int impar[5], par[5], flag = 0, entrada=0, i=0, p=0;

	do{
		scanf("%d", &entrada);

		if(entrada%2 == 0){
			flag++;
			par[p] = entrada;
			p++;	
		}else{
			flag++;
			impar[i] = entrada;
			i++;
		}

		if(p == 5){
			imprime_par(par);
		  	p = 0;
		}	
		if(i == 5){
			imprime_impar(impar);
		  	i = 0;
		}
	}while(flag<15);

	for(int k=0; k<i; k++)
		printf("impar[%d] = %d\n", k, impar[k]);

	for(int k=0; k<p; k++)
		printf("par[%d] = %d\n", k, par[k]);

  return 0;
}
void imprime_par(int par[]){
	int j;
	for(int j=0; j<5; j++)
		printf("par[%d] = %d\n", j, par[j]);
}
void imprime_impar(int impar[]){
	int j;
	for(int j=0; j<5; j++)
		printf("impar[%d] = %d\n", j, impar[j]);
}