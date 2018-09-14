#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x, flag=1, soma, cont=0;

	while(flag){
		scanf("%d", &x);
		soma=0;
		if(x){
			cont=0;
			while(cont<5){
				if(x % 2 == 0){
					soma+= x;
					cont++;
					x++;
				}
			  x++;
			}
		}else{
			return 0;
		}
	  printf("%d\n", soma);
	}
  return 0;
}