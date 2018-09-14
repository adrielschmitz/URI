#include <stdio.h>

int main(void){
	unsigned int anos;
	int n;
	scanf("%d", &n);
	while(n--){
		scanf("%u", &anos);
		if(anos >= 2015)
			printf("%u A.C.\n", anos-2014);
		else
			printf("%u D.C.\n", 2015-anos);
	}
	
	return 0;
}