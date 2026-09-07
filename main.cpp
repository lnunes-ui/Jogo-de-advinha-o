#include <iostream>
using namespace std;
int main() {
    int numsecret = 73;
    int x;
    bool acertou = false;
    int cont = 0;
    while(acertou == false) {
        cout << "Advinhe o número secreto (entre 1 e 100): " << "\n";
        cin >> x;
        cont++;
        if(x == numsecret){
            acertou = true;
            break;
        } else if (x > numsecret) {
            cout << "O número é MENOR!";
        } else {cout << "O número é MAIOR!";}
    
    }
    if(acertou == true){
        cout << "ACERTOU! O Número é "<< numsecret << "\n";
        cout << "Vocé demorou " << cont << " tentativas!" << "\n";
    }
   









    return 0;
}