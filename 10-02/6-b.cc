/*
Modificare il ciclo dell'esercizio precedente in modo che il programma continui a chiedere numeri di cui stampare la tabellina. Terminare il programma solo se il numero inserito è 0.
*/

#include<iostream>

using namespace std;

int main(){
    int n;

    do{
        cout << "Inserisci un numero diverso da 0: ";
        cin >> n;

        for(int i=0; i<=10; i++){
            cout << n << " * " << i << " = " << n*i << endl;
        }
    } while(n!=0);

    return 0;
}