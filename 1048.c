#include <stdio.h>
#include <stdlib.h>

int main() {

double entrada, salario, reajuste;
scanf("%lf", &entrada);

    if (entrada>=0 && entrada<=400.00) { 
	    printf("Novo salario: %.2lf\n", salario = entrada+(entrada*15)/100);
    	printf("Reajuste ganho: %.2lf\n", reajuste = (entrada*15)/100);
    	printf("Em percentual: 15 %\n");
    } 
	if (entrada>400.00 && entrada<=800.00) {
		printf("Novo salario: %.2lf\n", salario = entrada+(entrada*12)/100);
    	printf("Reajuste ganho: %.2lf\n", reajuste = (entrada*12)/100);
    	printf("Em percentual: 12 %\n");
    }
	if (entrada>800.00 && entrada<=1200.00) {
		printf("Novo salario: %.2lf\n", salario = entrada+(entrada*10)/100);
    	printf("Reajuste ganho: %.2lf\n", reajuste = (entrada*10)/100);
    	printf("Em percentual: 10 %\n");		
    }
	if (entrada>1200.00 && entrada<=2000.00) {
		printf("Novo salario: %.2lf\n", salario = entrada+(entrada*7)/100);
    	printf("Reajuste ganho: %.2lf\n", reajuste = (entrada*7)/100);
    	printf("Em percentual: 7 %\n");		
    } 
	if (entrada>2000.00) {
		printf("Novo salario: %.2lf\n", salario = entrada+(entrada*4)/100);
    	printf("Reajuste ganho: %.2lf\n", reajuste = (entrada*4)/100);
    	printf("Em percentual: 4 %\n");
    }

return 0;
}
