/*
Scrivere un programma che, dato un numero in ingresso, ne stampi tutti i suoi divisori.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    cout << "I divisori di " << n << " sono: ";
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}