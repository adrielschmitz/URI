#include <stdio.h>
#include <string.h>

int main(void){
	char str[25];

	while(fgets(str, 25, stdin))
		printf("%s\n", str[0] == 'e' ? "ingles" : str[0] == 'd' ? "frances" : str[0] == 'n' ? "portugues" : "caiu");

	return 0;
}