#include <stdio.h>
int main(void){
	int entrada, cont_2, cont_3, cont_4, cont_5, flag, aux;
	cont_2 = cont_3 = cont_4 = cont_5 = flag = 0;

	scanf("%d", &entrada);
	while(flag < entrada){
		scanf("%d", &aux);
		if(aux%2 == 0)
			cont_2++;
		if(aux%3 == 0)
			cont_3++;
		if(aux%4 == 0)
			cont_4++;
		if(aux%5 == 0)
			cont_5++;
	  flag++;
	}
	printf("%d Multiplo(s) de 2\n", cont_2);
	printf("%d Multiplo(s) de 3\n", cont_3);
	printf("%d Multiplo(s) de 4\n", cont_4);
	printf("%d Multiplo(s) de 5\n", cont_5);

  return 0;
}