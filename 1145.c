#include <stdio.h>

int main(void){
	int coluna, y, i, j, aux=0, cont=0;
	scanf("%d %d", &coluna, &y);
	
	for(i=1; i<=y; i++){
		cont=0;
		for(j=0; j<coluna; j++){
			aux++;
			if(aux<=y){
				printf("%d", aux);
				cont++;
				if(cont<coluna){
					printf(" ");
				}
			}else{
				break;
			}
		}
		if(aux>y){
			break;
		}
		printf("\n");
	}
}