/*
Scrivere un programma che, preso in ingresso un numero, calcoli il suo fattoriale.
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    int fattoriale = 1;

    cout << "Inserisci un numero: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        fattoriale *= i;
    }

    cout << fattoriale << endl;

    return 0;
}