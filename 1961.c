#include <stdio.h>
#include <stdlib.h>

int main(void){
    int atual, anterior, p, n;
    
    scanf("%d %d %d", &p, &n, &anterior);
    n--;
    while(n--){
        scanf("%d", &atual);
        if(abs(anterior-atual) > p){
            printf("GAME OVER\n");
            return 0;
        }
        anterior = atual;
    }
    printf("YOU WIN\n");
       
    return 0;
}