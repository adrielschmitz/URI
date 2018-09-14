#include <stdio.h>

int main(void){
	int n, x, aux=0, dentro=0, fora=0;
	scanf("%d", &n);
	while(aux<n){
		scanf("%d", &x);
		if(x>=10 && x<=20){
			dentro++;
		}else{
			fora++;
		}
		aux++;
	}
	printf("%d in\n", dentro);
	printf("%d out\n", fora);
}