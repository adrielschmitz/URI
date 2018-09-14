#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char entrada[500];
	scanf("%[^\n]", entrada);
	strlen(entrada) > 140 ? printf("MUTE\n") : printf("TWEET\n");

  return 0;
}