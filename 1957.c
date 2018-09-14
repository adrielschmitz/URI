#include <stdio.h>

int main(void){
    long long int decimal, mod;
    char hexa[20];
    int i=0;
    
    scanf("%lld", &decimal);

    while(decimal){
        mod = decimal % 16;
        decimal /= 16;
        if(mod <= 9)
            hexa[i] = mod+48;
        else if(mod == 10)
            hexa[i] = 'A';
        else if(mod == 11)
            hexa[i] = 'B';
        else if(mod == 12)
            hexa[i] = 'C';
        else if(mod == 13)
            hexa[i] = 'D';
        else if(mod == 14)
            hexa[i] = 'E';
        else if(mod == 15)
            hexa[i] = 'F';
        i++;
    }
    for(i=i-1; i>=0; i--)
        printf("%c", hexa[i]);
    printf("\n");
    
    return 0;
}