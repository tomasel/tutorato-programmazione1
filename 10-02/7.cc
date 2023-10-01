/*
Prendere in ingresso il numero n di cifre binarie da trasformare in decimale. 
Quindi prendere in ingresso le n cifre binarie in ordine inverso e infine 
stampare a video il decimale corrispondente.

Per esempio, preso n=5 e le cifre binarie 1 1 1 0 1, il valore decimale 
corrispondente è 23.
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    int decimale = 0;
    int potenza = 1;

    cout << "Inserisci il numero di cifre binarie: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int cifra;
        cout << "Inserisci la cifra binaria: ";
        cin >> cifra;

        decimale += cifra*potenza;
        potenza *= 2;
    }

    cout << decimale << endl;

    return 0;
}