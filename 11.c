#include <stdio.h>

int main() {
	int i, j, k, y, z; 
	
	printf("start\n");
	j = 2; 
	
	while(j >= 0) {
		i = j + 2;
		for(y = 0; y < 2; y++) {
			k = 0;
			if(j >= 1 && j < 2) {
				z = (j + i) * 2;
				if(k) { 
					printf("U");
				} else if(y == 2 || y == 0) {
					printf("F");
				} else {	
					printf("F");
				}
				if(j > 0 && y == 0) {
					printf("S"); 
				}
			}
			else {
				printf("%d\n", j);
			}
		}
		j--;
		printf ("\n");
	}
	printf ("fim\n");
	return 0;
}