#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int teststring(char str1[20], char str2[20]){
	int ta, tb, flag=1, i;
	ta=strlen(str1);
	tb=strlen(str2);

	if (ta==tb){
		for (i=0 ; i<ta && flag ; i++) 
			if (str1[i]!=str2[i]) flag = 0;
		}
		else flag = 0;

return flag;
}

int main(){

	char nome1[20], nome2[20], nome3[20];
	scanf("%s%s%s", nome1, nome2, nome3);
	
	if(teststring(nome1,"vertebrado")) {
		if (teststring(nome2, "ave")) {
			if (teststring(nome3, "carnivoro")) printf ("aguia\n");
			else printf ("pomba\n");
		}	
		if (teststring(nome2, "mamifero")) {
			if (teststring(nome3, "onivoro")) printf("homem\n");
			else printf ("vaca\n");
		}
	}
	if (teststring(nome1,"invertebrado")) {
		if (teststring(nome2, "inseto")) { 
			if (teststring(nome3, "hematofago")) printf("pulga\n"); 	
			else printf ("lagarta\n");
		}
		if (teststring(nome2, "anelideo")) {
			if (teststring(nome3, "onivoro")) printf ("minhoca\n");
			else printf("sanguessuga\n");
		}
	}
return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char nome1[20], nome2[20], nome3[20];
scanf("%s%s%s", nome1, nome2, nome3);
	

	if (strcmp(nome1,"vertebrado")==0) {
		if (strcmp(nome2,"ave")==0) {
			if (strcmp(nome3,"carnivoro")==0) printf ("aguia\n");
			else printf ("pomba\n");
		}	
		if (strcmp(nome2,"mamifero")==0) {
			if (strcmp (nome3,"onivoro")==0) printf("homem\n");
			else printf ("vaca\n");
		}
	}
	if (strcmp(nome1,"invertebrado")==0) {
		if (strcmp(nome2,"inseto")==0) { 
			if (strcmp(nome3,"hematofago")==0) printf("pulga\n"); 	
			else printf ("lagarta\n");
		}
		if (strcmp(nome2,"anelideo")==0) {
			if (strcmp(nome3,"onivoro")==0) printf ("minhoca\n");
			else printf("sanguessuga\n");
		}
	}
return 0;
}
*/