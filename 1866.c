#include <stdio.h>

int main(void){
	int N, m;
	scanf("%d", &N);

	while(N--){
		scanf("%d", &m);
		if(m%2 == 0)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
	
}