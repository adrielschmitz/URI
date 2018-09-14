#include <stdio.h>

int main(){

	int entrada, n=1, i, j, total=0;
	scanf("%d", &entrada);
	while (n <= entrada){
		for(i=n; i<n+1; i++){
			j=i*i;
			printf("%d %d %d\n", i, j, total = i*j);
			j++;
	 		total++;
	 		printf("%d %d %d\n", i, j, total);		
		}
	 n++;
	}
	
 return 0;
}