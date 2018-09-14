#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int i=1, j=0, aux=7;
	while(i<=9){
		if(i%2!=0){
			for(j=aux; j>=aux-2; j--){
				printf("I=%d J=%d\n", i, j); 
			}
		 aux+=2;
		}
	 i++;
	}
	return 0;
}