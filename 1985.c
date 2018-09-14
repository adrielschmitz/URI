#include <stdio.h>

int main(void){
	int codigo, quantidade, pedidos, aux=0;
	double total;

	scanf("%d", &pedidos);
	while(aux < pedidos){
		scanf("%d %d", &codigo, &quantidade);
		if(codigo == 1001)
			total += (double)quantidade*1.50;
		else if(codigo == 1002)
			total += (double)quantidade*2.50;
		else if(codigo == 1003)
			total += (double)quantidade*3.50;
		else if(codigo == 1004)
			total += (double)quantidade*4.50;
		else if(codigo == 1005)
			total += (double)quantidade*5.50;
	  aux++;
	}
  	printf("%.2lf\n", total);
  return 0;
}