#include <stdio.h>
int main(){
	float total = 1.0, i = 2.0;
	while( i<=100 ){
		total += (1.0/i);
		i++;
	}
	printf("%.2f\n", total);

	return 0;
}