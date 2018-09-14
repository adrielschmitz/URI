#include <stdlib.h>
#include <stdio.h>
#define MAX 12

int main(void){
	double M[MAX][MAX];
	double resultado = 0;
	int i, j, cont=0;
	char O[2];

	scanf("%s", O);

	for(i=0; i<MAX; i++)
		for(j=0; j<MAX; j++)
			scanf("%lf", &M[i][j]);

	for(i=0; i<MAX-1; i++){
		for(j=i+1; j<MAX; j++){
			resultado += M[j][i];
			cont++;
		}
	}
	
	if(O[0] == 'M')
		printf("%.1f\n", (resultado/cont));
	else if(O[0] == 'S')
		printf("%.1f\n", resultado);
	
  	return 0;
}