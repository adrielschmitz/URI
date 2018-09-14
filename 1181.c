#include <stdlib.h>
#include <stdio.h>

int main() {

	double m[12][12];
	int l;
	char ope;
	scanf("%d", &l);
	scanf("%c", &ope);
	double result = 0;

	for(int i = 0; i<12; i++)
		for(int j = 0; j < 12; j++)
			printf("%lf\n", m[i][j]);

	for(int i = 0; i < 12; i++)
		result += m[l][i];

	if(ope == 'M')
		result /= 12;
	else if(ope == 'S'){
		printf("%.1f\n", result);
	}
  return 0;
}