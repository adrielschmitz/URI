#include <stdio.h>
#include <stdlib.h>

int main(){
	int casos, i, aux=0, cont=1, num;
	scanf("%d", &casos);
	while(cont<=casos){
		scanf("%d", &num);
		if(num>0){
			for(i=1; i<=num; i++){
				if(num%i==0){
					aux++;
				}
				if(aux==3){
					break;
				}
			}
			if(aux==2){
				printf("%d eh primo\n", num);
			}else{
				printf("%d nao eh primo\n", num);
			}
		}else{
			printf("Entrada inválida\n");
			cont = 0;
		}
	 cont++;
 	 aux = 0;
	}
 
	return 0;
}