#include <stdio.h>

int main(void){
	int entrada, a, b;
	scanf("%d", &entrada);

	while(entrada--){
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}