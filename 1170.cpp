#include <stdio.h>

int main(void){
	double kg;
	int n, dias;
	scanf("%d", &n);
	while(n--){
		scanf("%lf", &kg);
		dias = 0;
		while(kg > 1){
			dias++;
			kg /= 2;
		}
		printf("%d dias\n", dias);
	}
	return 0;
}