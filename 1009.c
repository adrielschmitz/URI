#include <stdio.h>

	int main () {

	char Nome[10];
	double Salariofixo, TotaldeVendas, total;
	scanf("%s", Nome);
	scanf("%lf",&Salariofixo);
	scanf("%lf",&TotaldeVendas);
	total = Salariofixo + (TotaldeVendas * 15)/100;

	printf("TOTAL = R$ %.2lf\n", total);

	return 0;

	}