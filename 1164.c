#include <stdio.h>

int perfeito(int num){
	int i, soma;
	for(i=1; i<num; i++){
		if(num%i==0){
			soma+=i;
		}
	}
	if(soma==num){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	
	int n, x, i;
	scanf("%d", &n);
	if(n >=1 && n<=20){
		for(i=0; i<n; i++){
			scanf("%d", &x);
			if(perfeito(x)){
				printf("%d eh perfeito\n", x);
			}else{
				printf("%d nao eh perfeito\n", x);
			}
		}
	}else{
		printf("Valor inválido!\n");
	}

	return 0;
}