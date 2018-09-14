#include <stdio.h>


#include <string.h>

int main(void){
	//char s[6] = "%[^\n]";
	char str[100];
	int N;

	scanf("%d", &N);

	while(N--){
		getchar();
		fgets(str, 100, stdin);
		//scanf(s , str);
	}
	printf("Ciencia da Computacao\n");
	return 0;
}