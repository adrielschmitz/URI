#include <stdio.h>
#include <math.h>

	int main(){

		int A, B, C, maiorAB, maiorABC;
		scanf("%d %d %d",&A,&B,&C);
		maiorAB = (A+B);
	    maiorAB = (maiorAB +abs(A-B))/2;
	    maiorAB = ((maiorAB + C + abs(maiorAB-C))/2); 
		printf("%d eh o maior\n", maiorAB);

		return 0;
		}