#include <stdio.h>

int main(void){
	char frase[36] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n, i;
	scanf("%d", &n);

	for(i=0; i<n; i++)
		printf("%c", frase[i]);
	
	printf("\n");
	return 0;
}