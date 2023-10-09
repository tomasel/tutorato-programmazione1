/*
Scrivere una funzione ricorsiva che calcoli la somma tra due numeri interi positivi.
*/

#include <iostream>
using namespace std;

int somma(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return somma(a+1,b-1);
    }
}

int main(){
    int a = 0, b = 0;
    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;

    cout << "La somma tra " << a << " e " << b << " è " << somma(a,b) << endl;
}