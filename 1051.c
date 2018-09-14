#include <stdio.h>
#include <stdlib.h>
void calcula_imposto(double entrada);
int main(void){    
    double entrada;
    scanf ("%lf", &entrada);
    calcula_imposto(entrada);
  return 0;
}
void calcula_imposto(double entrada){
    double imposto = 0.0;

    if(entrada > 4500.00)
        imposto += (entrada - 4500) * 0.28 + 1500*0.18 +1000*0.08;
    else if(entrada > 3000.00)
        imposto += (entrada - 3000) *0.18 + 1000*0.08;
    else if(entrada > 2000.00)
        imposto += (entrada - 2000) * 0.08;

    if(imposto == 0.0)
        printf ("Isento\n");
    else
        printf("R$ %.2lf\n", imposto);
}