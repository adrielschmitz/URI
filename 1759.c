#include <stdio.h>

int main(void){
	int entrada;

	scanf("%d", &entrada);
	while(entrada--){
		printf("Ho");
		if(entrada) printf(" ");
	}
	printf("!\n");
	return 0;
}