#include <stdio.h>
int main(void){
	int n, i, res, controle, id;
	while(scanf("%d", &n), n) {
	 	while (n--) {
	 	controle = 0; id = 0;
	 	for (i=0; i<5; i++) {
	 		scanf ("%d", &res);
	 		if (res<=127) {
				 controle++; 
				 id=i;
			}
	 	}
	 	printf("%c\n", (controle == 1)? id+'A' : '*');
	 	}
	}
	return 0;
}