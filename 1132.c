#include <stdio.h>
int main(){

	int x, y, i, aux; 
	long long int cont=0;
	scanf ("%d%d", &x, &y);
	if (x>y) {
		aux = y;
        y = x;
        x = aux;
    }
		for (i=x ; i<=y ; i++){
			if (i%13!=0){
				cont+=i;
			}
		}
			printf ("%lld\n", cont);

	return 0;
}