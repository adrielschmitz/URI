#include <stdio.h>

int main(){

	int entrada, alcool=0, gasolina=0, diesel=0;
	while(scanf("%d", &entrada)){
			if(entrada==1){
				alcool++;
			}if(entrada==2){
				gasolina++;
			}if(entrada==3){
				diesel++;
			}if(entrada==4){
				break;
			}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0;
}