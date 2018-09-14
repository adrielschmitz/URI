#include <iostream>
#include <cmath>
using namespace std;
 
int main(void){
    int atual, anterior, p, n;
    cin >> p >> n >> anterior;
    n--;
    while(n--){
        cin >> atual;
        if(fabs(anterior-atual)>p){
             cout << "GAME OVER" << endl;
             return 0;
        }
        anterior = atual;
    }
    cout << "YOU WIN" << endl;    
    return 0;
}