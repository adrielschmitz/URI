#include <stdio.h>

int main(){
	int x, i, cont;
	
	while(scanf("%d", &x) != 0){
		if(x!=0){
			cont=0;
			for(i=1; i<=x; i++){
				cont++;
				printf("%d", i);
				if(cont<x){
					printf(" ");
				}
			}
		}else{
			break;
		}
		printf("\n");
	}

 return 0;
}