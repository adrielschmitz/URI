#include <stdio.h>
int main(){

	int entrada, aux, i;
	scanf ("%d", &entrada);
		
	for (i=0 ; i<entrada ; i++){
		scanf("%d", &aux);
			
		if(aux==0){
			printf("NULL\n");
		}else{
			if(aux%2==0){
				printf("EVEN ");
			}else { 
				printf("ODD ");
			 }
			if(aux>0){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");
			 } 
		}
	}
			
	return 0;
}


