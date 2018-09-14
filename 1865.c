#include <stdio.h>
#include <string.h>
int main(void){
	int n, entrada;
	char str[50];
	scanf("%d", &n);
	while(n--){
		scanf("%s %d", str, &entrada);
		if(strcmp (str, "Thor") == 0)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}