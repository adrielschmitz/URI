#include <stdio.h>
#include <stdlib.h>
int main(){
	int l_inicial, c_inicial, l_final, c_final, flag=1;

	while(flag){
		if(l_inicial+c_inicial+l_final+c_final == 0)
			return 0;
		if(l_inicial == c_inicial && l_final == c_final)
			printf("0\n");
		else if( l_inicial == c_inicial || l_final == c_final || l_inicial+l_final == c_inicial+c_final || l_inicial-l_final == c_inicial-c_final)
			printf("1\n");
		else
			printf("2\n");
	}
  return 0;
}