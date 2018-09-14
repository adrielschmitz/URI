#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(void){
	int vet[4], i;

	for(i=0; i<4; i++)
		scanf("%d", &vet[i]);
	
	sort(vet, vet + 4);

	if(vet[0]+vet[1] > vet[2])
		printf("S\n");
	else if(vet[0]+vet[1] > vet[3])
		printf("S\n");
	else if(vet[1]+vet[2] > vet[3])
		printf("S\n");
	else if(vet[0]+vet[2] > vet[3])
		printf("S\n");
	else
		printf("N\n");
	return 0;
}