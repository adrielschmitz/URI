#include <stdio.h>
#include <stdlib.h>
int main(void){
	int cont=1, x, z, xdepois=0, flag=1;
	x = z = 0;
	scanf("%d", &x);
	while(flag){
		scanf("%d", &z);
		if(x<z){
			break;
		}
	}
	xdepois = x;
	xdepois++;
	while(x < z){
		cont++;
		x += xdepois;
		xdepois++;
	}
	printf("%d\n", cont);

  return 0;
}