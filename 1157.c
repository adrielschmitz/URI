#include <stdio.h>

int main(){
	int n, i;
	while( scanf("%d", &n) != 1) getchar();
	for(i=1; i<=n; i++){
		if(n%i == 0){ printf("%d\n", i); }
	}
	return 0;
}