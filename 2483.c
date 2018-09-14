#include <stdio.h>

int main(void){
	int n, i;
	while( scanf("%d", &n) != 1)
		getchar();
	printf("Feliz nat");
	for(i=0; i<n; i++)
		printf("a");
	printf("l!\n");

  return 0;
}