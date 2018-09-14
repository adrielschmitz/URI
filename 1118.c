#include <stdio.h>
#include <stdlib.h>

int main(void){
	int notasvalidas=1, opcao, flag = 1, flag2=1;
	double nota1, nota2, media;

	while(flag){
		nota1 = nota2 = media = 0.0;
		notasvalidas = 1;
		flag2=1;

		while(notasvalidas != 0){
			scanf("%lf", &nota1);
			if(nota1>=0.0 && nota1<=10.0){
				notasvalidas = 0;
			}else{
				printf("nota invalida\n");
				notasvalidas = 1;
			}
		}
		while(notasvalidas == 0){
			scanf("%lf", &nota2);
			if(nota2>=0.0 && nota2<=10.0){
				notasvalidas = 1;
			}else{
				printf("nota invalida\n");
				notasvalidas = 0;
			}
		}
		printf("media = %.2lf\n", media = (nota1+nota2)/2);
		while(flag2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &opcao);
			switch(opcao){
				case 1:
					flag = 1;
					flag2 = 0;
					break;
				case 2:
					return 0;
				default:
					flag2 = 1;
			}
		}
	}
  return 0;
}