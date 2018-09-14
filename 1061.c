#include <stdlib.h>
#include <stdio.h>

int main(){
	int dia1, dia2;
	int h1, h2, m1, m2, s1, s2;
	int st, dt, ht, mt;

	scanf("Dia %d", &dia1); // a entrada do teclado deve ser exatamente igual está nas ""
	scanf("%d : %d : %d\n", &h1, &m1, &s1);
	scanf("Dia %d", &dia2); // o mesmo caso que o primeiro;
	scanf("%d : %d : %d", &h2, &m2, &s2);

	s1 += m1*60 + h1*60*60 + dia1*24*60*60;
	s2 += m2*60 + h2*60*60 + dia2*24*60*60;
	st = s2 - s1;

	dt = st/(24*60*60);
	st -= dt*24*60*60;
	ht = st/(60*60);
	st -= ht*60*60;
	mt = st/60;
	st -= mt * 60;
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dt, ht, mt, st);
	 
 return 0;
}