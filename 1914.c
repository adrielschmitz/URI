#include <stdio.h>
#include <string.h>

int main(void){
	int n, a, b;
	char j1[100], j2[100], escolha1[10], escolha2[10];
	scanf("%d", &n);

	while(n--){
		getchar();
		scanf("%s %s %s %s", j1, escolha1, j2, escolha2);			
		scanf("%d %d", &a, &b);
		if((a+b)%2 == 0){
			if(strcmp (escolha1, "PAR") == 0)
				printf("%s\n", j1);
			else
				printf("%s\n", j2);
		}else{
			if(strcmp (escolha1, "IMPAR") == 0)
				printf("%s\n", j1);
			else
				printf("%s\n", j2);
		}
	}

	return 0;
}