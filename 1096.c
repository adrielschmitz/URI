#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int i=1, j=0;
	while(i<=9){
		if(i%2!=0){
			for(j=7; j>=5; j--){
				printf("I=%d J=%d\n", i, j);
			}
		}
		i++;
	}
	return 0;
}