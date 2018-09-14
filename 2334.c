#include <stdio.h>
#include <stdlib.h>

int main(void){
	int flag = 1;
	unsigned long long int entrada=0;

	while(flag){
		scanf("%llu", &entrada);
		if(entrada != -1)
			entrada == 0 ? printf("0\n") : printf("%llu\n", entrada-1);
		else
			return 0;
	}
 return 0;
}