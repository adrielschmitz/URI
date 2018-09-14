#include <stdio.h>

int main(void){
	int hora, minutos, atraso;
	while( scanf("%d:%d", &hora, &minutos) != EOF){
		atraso = (hora*60) + minutos;
		(atraso+=60) > 480 ? printf("Atraso maximo: %d\n", atraso-480) : printf("Atraso maximo: 0\n");
	}
  return 0;
 }