#include <stdio.h>
#include <stdlib.h>
int main(){

	int entrada, i=0, x,y;
	double resultado;
	scanf ("%d", &entrada);
		while (i<entrada){
			scanf("%d%d", &x,&y);
			if (y!=0){
				printf ("%.1lf\n", resultado=(double)x/y);
			}
			else {
				printf ("divisao impossivel\n");
			}
		i++;
		}

	return 0;
}