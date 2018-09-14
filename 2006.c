#include <stdio.h>
int main(void){
	int tipo, aux=0, cont=0, chute;
	scanf("%d", &tipo);
	while(aux <= 4){
		scanf("%d", &chute);
		if(chute == tipo)
			cont++;
		aux++;
	}
	printf("%d\n", cont);
  return 0;
}