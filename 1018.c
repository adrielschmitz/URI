#include <stdio.h>

	int main(){
 
	/* um vetor serve para estudar, manipular, organizar, salvar e extrair 
	informações de uma grande quantidade de dados */

	int N, n, notas[]={0,0,0,0,0,0,0};
	scanf ("%d", &N);
	n = N;
	if ( N - 100 >= 0) {
		notas[0] = N/100;
		N = N - notas[0]*100;
		//N -= notas100*100;
	}
	if ( N - 50 >= 0) {
		notas[1] = N/50;
		N -= notas[1]*50;
	}
	if ( N - 20 >= 0) {
		notas[2] = N/20;
		N -= notas[2]*20;
	}
	if ( N - 10 >= 0) {
		notas[3] = N/10;
		N -= notas[3]*10;
	}
	if ( N - 5 >= 0) {
		notas[4] = N/5;
		N -= notas[4]*5;
	}
	if ( N - 2 >= 0) {
		notas[5] = N/2;
		N -= notas[5]*2;
	}
	if ( N - 1 >= 0) {
		notas[6] = N/1;
		N -= notas[6];
	}
	printf ("\n%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, notas[0], notas[1], notas[2], notas[3], notas[4], notas[5], notas[6]);

	return 0;
	}