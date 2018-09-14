#include <stdio.h>
int main(){
	int a, n=1, total=0, i=0;
	scanf("%d %d", &a, &n);
	while(n <= 0){
		scanf("%d", &n);
	}
	do{
		total += a;
		a++;
		i++;
	}while(i < n);
	printf("%d\n", total);

 return 0;
}