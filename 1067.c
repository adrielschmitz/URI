#include <stdio.h>

int main(){

	int entrada, i, aux=0;
	scanf ("%d", &entrada);

	while (i<=entrada) {
		aux = i;
		if (aux%2 !=0) {
			printf ("%d\n", aux);
		}
		i++;
	}

	return 0;
}