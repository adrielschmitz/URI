#include <stdio.h>
#include <stdlib.h>
int main(){

	int x, y, i, aux;
	scanf ("%d%d", &x, &y);
	if (x>y) {
		aux = y;
        y = x;
        x = aux;
	}    
	for (i=x+1 ; i<y ; i++){
		if (i%5==2 || i%5==3){
			printf("%d\n", i);
		}
	}

	return 0;
}