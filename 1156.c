#include <stdio.h>
int main(void){
	double s = 1.0, i = 3.0, j = 2.0;
	while(i<=39.0){
		s += i/j;
		j *= 2.0;
		i += 2.0;
	}
	printf("%.2lf\n", s);
  return 0;
}