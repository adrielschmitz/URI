#include <stdio.h>

int main(void){
	int cont=0, cont2=0;
	double n1, n2, media;
	while(cont<=0){
		scanf("%lf", &n1);
		if(n1>=0 && n1<=10.0){
			cont++;
		}else{
			printf("nota invalida\n");
		}
	}
	while(cont2<=0){
		scanf("%lf", &n2);
		if(n2>=0 && n2<=10){
			cont2++;
		}else{
			printf("nota invalida\n");	
		}
	}
	if(cont==1 && cont2==1){
		printf("media = %.2lf\n", media = (n1+n2)/2);
	}
}