#include <stdio.h>
#include <stdlib.h>
void vencedor(int inter, int gremio);
int main(){
	int grenais, golgremio, golinter, empates, flag=1, opcao, gremio, inter;
	grenais = golgremio = golinter = empates = gremio = inter = 0;
	while(flag){
		grenais++;
		scanf("%d %d", &golinter, &golgremio);
		if(golinter > golgremio)
			inter++;
		else if(golinter == golgremio) 
			empates++;
		else 
			gremio++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				break;
			case 2:
				flag=0;
				break;
		}
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, inter, gremio, empates);
	vencedor(gremio, inter);
	
  return 0;
}
void vencedor(int inter, int gremio){
	if(gremio > inter)
		printf("Inter venceu mais\n");
	else if(gremio == inter)
		printf("Nao houve vencedor\n");
	else 
		printf("Gremio venceu mais\n");
}