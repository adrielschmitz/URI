#include <stdio.h>
#include <stdlib.h>

int main() {
    float somador, j;
    int i1,j1;
    for(somador = 0; somador<=2.2; somador+=0.2){
        for(j = 1; j<=3; j+=1){
        	if(j==0.0 || j==1.0 || j==2.0 ){
        		i1 = somador;
        		j1 = j+i1;;
            	printf("I=%d J=%d\n", i1, j1);
            }
        	else
				printf("I=%.1lf J=%.1lf\n", somador, j+somador);
		}
	}

  return 0;        
}
