#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main() {
    srand(time(0));
    int numsecret = (rand() % 100) + 1;
    int x;
    bool acertou = false;
    int cont = 0;
    while(acertou == false) {
        cout << "Advinhe o número secreto entre 1 e 100, caso queira desistir digite 0: " << "\n";
        cin >> x;
        if (x == 0){
            break;
        }
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
    if(x == 0){
        cout << "VOCÊ DESISTIU! Você tentou "<< cont << " vezes." << "\n"; 
    }
    return 0;
}