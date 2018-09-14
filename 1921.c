#include <stdio.h>
int main(void){
	double n;
	scanf("%lf", &n);
	n -= 2;
	printf("%.0lf\n", (n*n)*0.5+n*0.5-1);
	return 0;
}