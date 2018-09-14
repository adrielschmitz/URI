#include <stdio.h>

int main(void){
	int a, b;
	unsigned long int total;
	scanf("%d %d", &a, &b);
	total = a*b;
	printf("%lu\n", total);
}