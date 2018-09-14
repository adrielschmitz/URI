#include <stdio.h>
int main(void){
	int entrada;
	while(scanf("%d", &entrada) != EOF){
		if(entrada >= 1001 && entrada<= 9999)
			printf("%d\n", entrada-1);
	}
  return 0;
}