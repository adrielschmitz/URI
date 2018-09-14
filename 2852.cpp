#include <stdio.h>

int main(){
	char matriz[27][27];
	int i, j;
	
	for(i=0; i<26; i++) 
		for(j=0; j<26; j++) 
			matriz[i][j] = 'a'+j;

	
	for(i=0; i<26; i++){
		for(j=0; i <26; j++) 
			printf("%c ", matriz[i][j]);
		printf("\n");
	}

	return 0;
}