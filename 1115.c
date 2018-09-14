#include <stdio.h>
#include <stdlib.h>
void verifica(int x, int y);
int main(void){
	int x, y, flag=1;
	while(flag){
		scanf("%d %d", &x, &y);
		if(x == 0 || y == 0){
			return 0;
		}else{
			verifica(x, y);
		}
	}
 return 0;
}
void verifica(int x, int y){
	if(x > 0 && y > 0) 
		printf("primeiro\n");
	else if(x > 0 && y < 0)	
		printf("quarto\n");
	else if(x < 0 && y < 0)	
		printf("terceiro\n");
	else 
		printf("segundo\n");
}