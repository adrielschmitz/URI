#include <stdio.h>

int main(void){
	int maior, N, temp;

	while(scanf("%d", &N) != EOF){
		maior = -1;
		while(N--){
			scanf("%d", &temp);
			if(temp > maior)
				maior = temp;
		}
		if(maior >= 20) 
			printf("3\n");
		else if(maior >= 10) 
			printf("2\n");
		else 
			printf("1\n");
	}

	return 0;
}