#include <stdio.h>
int main(){

	int entrada, i, r;
	scanf ("%d", &entrada);

	for (i=1 ; i<=10 ; i++) {
		r = i*entrada;
		printf ("%d x %d = %d\n", i, entrada, r);
	}

	return 0;
}