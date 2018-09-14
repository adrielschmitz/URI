#include <stdio.h>

int main(void){
	int N, i, j, cont;
	while(scanf("%d", &N) != EOF){
		cont = N;
		for(i=0; i<N; i++){
			cont--;
			for(j=0; j<N; j++){
				if(i == j)
					if(i == cont && N%2 != 0)
						printf("2");
					else
						printf("1");
				else if(j == cont)
					printf("2");
				else 
					printf("3");
			}
			printf("\n");
		}
	}
	return 0;
}