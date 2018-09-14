#include <stdio.h>

	int main(){

	int N, n100,n50, n20, n10, n5, n2, n1;
	n100 = n50 = n20 = n10 = n5 = n2 = n1 = 0;

	scanf ("%d", &N);
	printf("%d\n", N);
	while(N-100 >= 0){
		n100++;
		N -= 100;
	}
	while(N-50 >= 0){
		n50++;
		N -= 50;
	}
	while(N - 20 >= 0){
		n20++;
		N -= 20;
	}
	while(N - 10 >= 0){
		n10++;
		N -= 10;
	}
	while(N-5 >= 0){
		n5++;
		N -= 5;
	}
	while(N-2 >= 0){
		n2++;
		N -= 2;
	}
	while(N-1 >= 0){
		n1++;
		N -= 1;
	}
	printf ("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n100, n50, n20, n10, n5, n2, n1);
	return 0;
}