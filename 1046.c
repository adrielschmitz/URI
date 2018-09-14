#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
		
		int valor1, valor2, jogo;
		scanf("%d%d", &valor1, &valor2);
		jogo = 24-valor1+valor2;

		if(jogo > 24){
			jogo = abs(24- (24-valor1+valor2));
		}
		printf("O JOGO DUROU %d HORA(S)\n", jogo);

	return 0;
}

