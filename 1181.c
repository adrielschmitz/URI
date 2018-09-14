#include <stdlib.h>
#include <stdio.h>
#define MAX 12

int main(void){
	double M[MAX][MAX];
	double resultado = 0;
	int linha, i, j;
	char T[2];

	scanf("%d", &linha);
	scanf("%s", T);

	for(i=0; i<MAX; i++)
		for(j=0; j<MAX; j++)
			scanf("%lf", &M[i][j]);

	for(j=0; j<MAX; j++)
		resultado += M[j][linha];
	
	if(T[0] == 'M')
		printf("%.1f\n", (resultado/MAX));
	else if(T[0] == 'S')
		printf("%.1f\n", resultado);
	
  	return 0;
}