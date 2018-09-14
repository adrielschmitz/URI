#include <stdio.h>

int main(){
	int n, i, j, aux, flag, matriz[16][16];
	while(scanf("%d", &n), n != 0){
		aux = 1;
		for(i=1; i<=n; i++){
			flag = aux;
			for(j=0; j<n; j++){
				matriz[i-1][j] = flag;
				flag = flag * 2;
			}
			aux = aux * 2;
		}
	  aux = 1;
	  flag = 0;
		while(aux < matriz[n-1][n-1]){
			aux = aux * 10;
			flag++;
		}
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				printf("%*d", flag, matriz[i][j]);
				if(j != n-1)
					printf(" ");
				else
					printf("\n");
			}
		}
	  printf("\n");
	}
  return 0;
}