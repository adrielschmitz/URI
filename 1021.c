#include <stdio.h>

	int main (){
	int r, c; 
	int num[]={0,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf ("%d.%d", &r,&c);

	if (r - 100 >= 0) {
		num[0] = r/100;
		r = r - num[0]*100;}

	if (r - 50 >= 0) {
		num[1] = r/50;
		r = r - num[1]*50;}

	if (r - 20 >= 0) {
		num[2] = r/20;
		r = r - num[2]*20;}

	if (r - 10 >= 0) {
		num[3] = r/10;
		r = r - num[3]*10;}

	if (r - 5 >= 0) {
		num[4] = r/5;
		r = r - num[4]*5;}

	if (r - 2 >= 0) {
		num[5] = r/2;
		r = r - num[5]*2;}

	if (r - 1 >= 0) {
		num[6] = r/1;
		r = r - num[6];}

	if (c - 50 >= 0) {
		num[7] = c/50;
		c = c - num[7]*50;}

	if (c - 25 >= 0) {
		num[8] = c/25;
		c = c - num[8]*25;}

	if (c - 10 >= 0) {
		num[9] = c/10;
		c = c - num[9]*10;}

	if (c - 5 >= 0) {
		num[10] = c/5;
		c = c - num[10]*5;}
		
	if (c - 1 >= 0) {
		num[11] = c/1;
		c = c - num[11]; }

printf ("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", num[0], num[1], num[2], num[3], num[4], num[5]);
printf ("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", num[6], num[7], num[8], num[9], num[10], num[11]);

	return 0;
}
