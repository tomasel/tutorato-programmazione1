/*
Preso un numero in ingresso, scrivere la tabellina di quel numero da 0 a 10 usando un ciclo for.
*/

#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;

    for(int i=0; i<=10; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }

    return 0;
}