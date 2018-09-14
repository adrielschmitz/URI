#include <stdio.h>

int main(void){
	long long int fat1, fat2;
	int n1, n2, i;

	while(scanf("%d %d", &n1, &n2) != EOF){
		fat1 = fat2 = 1;
		for(i=1; i<=n1; i++)
			fat1 *= i;

		for(i=1; i<=n2; i++)
			fat2 *= i;

		printf("%lld\n", fat1+fat2);		
	}
	return 0;
}