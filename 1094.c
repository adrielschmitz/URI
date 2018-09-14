#include <stdio.h>

double porcentagem(int total, int soma){
	double porcento = (total*100.00)/soma;
	return porcento;
}

int main(){
	int n, i, quantia=0, soma=0, tcoelhos=0, tratos=0, tsapos=0;
	char tipo;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %c", &quantia, &tipo);
		if(quantia>=1 && quantia<=15){
			soma += quantia;
			if(tipo=='C'){
				tcoelhos += quantia;
			}
			if(tipo=='R'){
				tratos += quantia;
			}
			if(tipo=='S'){
				tsapos += quantia;
			}
		}else{
			i--;
		}
	}
	printf("Total: %d cobaias\n", soma);
	printf("Total de coelhos: %d\n", tcoelhos);
	printf("Total de ratos: %d\n", tratos);
	printf("Total de sapos: %d\n", tsapos);
	printf("Percentual de coelhos: %.2lf %%\n", porcentagem(tcoelhos, soma));
	printf("Percentual de ratos: %.2lf %%\n", porcentagem(tratos, soma));
	printf("Percentual de sapos: %.2lf %%\n", porcentagem(tsapos, soma));

	return 0;
}