#include <stdio.h>
#include <stdlib.h>
int main(){
	int testes;
	scanf("%d", &testes);

	while(testes){
		int pa,pb, anos=0;
		double ga,gb;
		scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

		while(pa <= pb && anos <=100){
			pa += pa * (ga/100);
			pb += pb * (gb/100);
			anos++;
		}

		if(anos>100)
			printf("\nMais de 1 seculo.");
		else
			printf("\n%d anos.", anos);

	  testes--;
	}
	printf("\n");

  return 0;
}