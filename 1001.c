#include <stdio.h>
#include <stdlib.h>

int main() {

 
  int i = 0, j = 1, a = 0, b = 2; 
  int c, d; 
 
 for (i = 2; i > 0 ; i--­­){ 
    j = 0; 
 
    while(i > 1 && j < 2) { 
      a = b - 1; 
      j++; 
      b += 2; 
    } 
    d = 0; 
    
    do { 
      d++; 
      j = d + 1;   
    }while(d == 1 || d == ­-1); 
   
    if(d == 1) { 
       c = 10; 
       d = c % 3; 
    } 
 
    if((i + j) + 1 == 5) { 
       c=­-2; 
    } else { 
       c=­-3; 
    } 
  }
       printf ("C = %d\nI = %d\nD = %d\nA = %d\nB = %d\nJ = %d\n", c, i, d, a, b, j); 
  return 0;
  }