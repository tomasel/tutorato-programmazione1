/*
Scrivere un programma che, presi in ingresso due numeri A e B diversi entrambi pari o entrambi dispari, 
verifichi che il valore assoluto della differenza tra la somma dei
numeri pari tra A e B esclusi e la somma dei numeri dispari, sia uguale al valore medio di A e B.

Esempio, dati A=3 e B=9, facciamo la somma dei valori dispari tra A e B: 5+7=12 e la somma dei valori 
pari tra A e B: 4+6+8=18, la differenza è 6 che è la media dei due valori. 
*/

#include <iostream>
using namespace std;

int main(){
    int A = 0, B = 0;
    cout << "Primo numero: ";
    cin >> A;
    cout << "Second numero: ";
    cin >> B;

    int sommaPari = 0, sommaDispari = 0;

    for (int i=A+1; i<B; i++){
        if (i%2 == 0){
            sommaPari+=i;
        }
        else{
            sommaDispari+=i;
        }
    }

    int media = (A+B)/2;

    int differenza = sommaPari-sommaDispari;
    if (differenza < 0){
        differenza = differenza*(-1);
    }

    if (differenza == media){
        cout << "La differenza tra la somma dei numeri pari e dispari è uguale alla media tra i due numeri" << endl;
    }
    else{
        cout << "La differenza tra la somma dei numeri pari e dispari non è uguale alla media tra i due numeri" << endl;
    }
}