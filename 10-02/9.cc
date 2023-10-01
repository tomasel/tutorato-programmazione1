/*
Scrivere un programma che implementi una calcolatrice per numeri interi, ossia 
che prenda in ingresso due numeri e un carattere ('+','-','*','/') e che calcoli
poi il risultato dell'operazione.
*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2;
    char op;

    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << "Inserisci un operatore tra {+,-,*,/}: ";
    cin >> op;

    switch(op){
        case '+':
            cout << n1+n2 << endl;
            break;
        case '-':
            cout << n1-n2 << endl;
            break;
        case '*':
            cout << n1*n2 << endl;
            break;
        case '/':
            cout << n1/n2 << endl;
            break;
        default:
            cout << "Operatore non valido" << endl;
    }

    return 0;
}