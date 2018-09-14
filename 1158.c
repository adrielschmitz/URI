#include <stdio.h>
int main(){
	int n, x, y, soma, i=0, cont=0;
	scanf("%d", &n);
	while(i<n){
		scanf("%d %d", &x, &y);
		cont = 0;
		soma = 0;
		while(cont<y){
			if(x%2 != 0){
				soma += x;
				x++;
				cont++;
			}else{ x++;	}
		}
		printf("%d\n", soma);
		i++;
	}
  return 0;
}