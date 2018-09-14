#include <stdio.h>
int main(){
	int resultado=1, n=0, flag = 1;
	while(flag){
		scanf("%d", &n);
		if(n>0 && n<13){
			while(n){
				resultado *= n;
				n--;
			}
			flag = 0;
		}else{
			flag = 1;
		}
	}
  printf("%d\n", resultado);
  return 0;
}