#include <stdio.h>
int main(){
	int vet[10], i=0, x;
	scanf("%d", &x);
	do{
		vet[i] = x;
		x += x; 
		printf("N[%d] = %d\n", i, vet[i]);
		i++;
	}while(i<10);
  return 0;
}