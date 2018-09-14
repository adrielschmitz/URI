#include <stdlib.h>
#include <stdio.h>
#define MAX 12

int main(void){
	double M[MAX][MAX];
	double resultado = 0;
	int i, j, cont=1, aux=0;
	char O[2];

	scanf("%s", O);

	for(i=0; i<MAX; i++)
		for(j=0; j<MAX; j++)
			scanf("%lf", &M[i][j]);

	for(i=0; i<MAX-1; i++){
		for(j=0; j<MAX-cont; j++){
			resultado += M[j][i];
			aux++;
		}
		cont++;
	}
	
	if(O[0] == 'M')
		printf("%.1f\n", (resultado/aux));
	else if(O[0] == 'S')
		printf("%.1f\n", resultado);
	
  	return 0;
}