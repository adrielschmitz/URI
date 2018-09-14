#include <stdio.h>
#include <stdlib.h>

int main (){

	int i=0, a=0, b, c=0;
	float f;

	a = (3-1) + 10*(5+(4-1));
	b = 2;
	f = 5 / b;
    printf ("F = %.1lf\n", f);
	if (a < 80){
		a = 1;

	} else {
		a = 2;
		if (f < 2.5) {
			f = 1;
		} else {
			f = 2;
           }

        }


    do {
    	a++;
    } while (a < 2); 

    for ( i=0 ; i<3 ; i++) {
    	for (b=0 ; b<3 ; b+=2) {
    	f += 0.5;
    	}
    }

    if ( a!= 1 && b == 4) {
    	i=0;
    } else {
    	a = 0;
    	for (i=0 ; i!=3 ; i++) {
    		a++;
       	}
    }
    printf ("C = %d\nI = %d\nF = %.1f\nA = %d\nB = %d\n", c, i, f, a, b);
	return 0;

}