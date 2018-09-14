#include <stdio.h>
#include <stdlib.h>

void impressao(int n){
	int i, j, aux=0;
	for(i=1; i <= n; i++){
		for (j=1 ; j<=3 ; j++){
			aux++;
			printf("%d ", aux);
		}
		aux++;
		printf("PUM\n");
	}
}

int main(){
	
	int entrada;
		
	if(scanf ("%d", &entrada) == 1){
		impressao(entrada);
	}

	return 0;
}