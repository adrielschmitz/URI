#include <stdio.h>
int main(){

	int entrada;
	
		while(scanf("%d",&entrada),(entrada!=2002)) {
			if (entrada!=2002) {
				printf ("Senha Invalida\n");			
			}  
		} printf ("Acesso Permitido\n");
	 
	return 0;
}