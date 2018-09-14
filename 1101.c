#include <stdio.h>
#include <string.h> 

int main(){
	int m=1, n=1, i, soma=0, aux=0;
	while(m>0 && n>0){
		scanf("%d%d", &m, &n);
		if(m>n && m>0 && n>0){
			aux = n;
			n = m;
			m = aux;
			for(i=m; i<=n; i++){
				printf("%d ", i);
				soma+=i;
			}
			printf("Sum=%d\n", soma);			
		}else{
			if(m>0 && n>0){
				for(i=m; i<=n; i++){
					printf("%d ", i);
					soma+=i;
				}
			 printf("Sum=%d\n", soma);
			}
			
		}
		aux = 0;
		soma = 0;
	}

	return 0;
}