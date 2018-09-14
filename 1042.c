#include <stdio.h>

int main(){

	int A, B, C, aux, a, b, c;
	scanf ("%d %d %d", &A, &B, &C);
		a=A;
		b=B;
		c=C;

		if (A>B) {
			aux=A;
			A=B;
			B=aux;
		}

		if (B>C) {
			aux=B;
			B=C;
			C=aux;
		}
		if (A>B) {
			aux=A;
			A=B;
			B=aux;
		}
	printf("%d\n%d\n%d\n", A, B, C);
	printf("\n%d\n%d\n%d\n", a, b, c);
	return 0;

	
}