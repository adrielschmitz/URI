#include <stdio.h>
#define MAX 12

int main(void){
	double M[MAX][MAX];
	double resultado = 0, cont=0;
	int i, j;
	char O[2];

	scanf("%s", O);

	for(i=0; i<MAX; i++)
		for(j=0; j<MAX; j++)
			scanf("%lf", &M[i][j]);

	for(i=1; i<MAX-1; i++){
		if(i <= 5)
			for(j=MAX-1; j>(MAX-1)-i; j--){
				resultado += M[i][j];
				cont++;
			}
		else
			for(j=MAX-1; j>i; j--){
				resultado += M[i][j];
				cont++;
			}
	}
	
	O[0] == 'M' ? printf("%.1f\n", (resultado/cont)) : printf("%.1f\n", resultado);

  	return 0;
}