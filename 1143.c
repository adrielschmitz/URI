#include <stdio.h>
#include <stdlib.h>
int main(){ 

	int entrada, i, j; 
	scanf ("%d", &entrada);
	if (entrada>0 && entrada<1000){
		for (i=1 ; i<=entrada ; i++){
			j = i*i;
			printf("%d %d %d\n", i, j, i*j);
		}
	}
	return 0;
}