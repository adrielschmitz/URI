#include <stdio.h>
int main(){
	double A, B, C, aux;
	scanf ("%lf %lf %lf", &A, &B, &C);
	if(A<B){
		aux = A;
		A = B;
		B = aux;
	}
	if(B<C){
		aux = B;
		B = C;
		C = aux;
	}

	if (A >= B+C)
		printf("NAO FORMA TRIANGULO\n");
	else{
		if(A*A == (B*B)+(C*C)) 
			printf ("TRIANGULO RETANGULO\n");
		else if(A*A>(B*B)+(C*C))
			printf ("TRIANGULO OBTUSANGULO\n");
		else if(A*A<(B*B)+(C*C))
			printf ("TRIANGULO ACUTANGULO\n");
		else if(==B && A==C) 
			printf ("TRIANGULO EQUILATERO\n");
		else if(A == B && A != C || B == C && B!=A || C == A && C != B)
			printf ("TRIANGULO ISOSCELES\n");
	}
  return 0;
}
