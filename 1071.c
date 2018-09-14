#include <stdio.h>
#include <stdlib.h>

int numero_impar(int x, int y){
	int i, soma=0;
	if(x<y){
		for(i=x+1; i<y; i++){
			if(i%2!=0)
				soma += i;	
		}	
	}else{
		for(i=y+1; i<x; i++){
			if(i%2!=0)
				soma += i;
		}
	}
	return soma;
}
int main(void){
	int x, y;
	scanf ("%d %d", &x, &y);
	printf("%d\n", numero_impar(x, y));
}