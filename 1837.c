#include <stdio.h>
#include <stdlib.h> // função abs é contida nesta biblioteca
#include <math.h>

int main(void) {
    int a, b, quociente, resto;

    scanf("%d %d", &a, &b);  
    if(b > 0)
        quociente = (int)floor((double)a / b); //função qie arredonda para baixo
    else
        quociente = (int)ceil((double)a / b); // função que arredonda o numero para cima

    resto = abs(a-(quociente*b)); // função abs retorna o valor absoluto, o módulo do numero
    printf("%d %d\n", quociente, resto);

  return 0;
}