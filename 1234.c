#include <stdio.h>

 int square (int x){
	
	printf ("O quadrado é %d\n",(x*x));
}
	int main(){

		int num;
		printf("Entre com um numero: ");
		scanf("%d", &num);	
		printf ("\n");
		square(num);
		return 0;
}

