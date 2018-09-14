#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int entrada, a=0, b=1, c=0, i;
	scanf ("%d", &entrada);

	if(entrada>0 && entrada<46){
		printf("%d %d", a, b);
		for(i=1 ; i<=entrada-2 ; i++){
			c = b+a;
			printf (" %d", c);
			a = b;
			b = c;
		}
		printf("\n");
	}

  return 0;
}