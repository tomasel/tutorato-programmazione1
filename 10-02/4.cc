/*
Scrivere un programma che prende in ingresso un numero e stampi "pari" se pari o "dispari" se è dispari, usando un if.
*/

#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;
 
    if(n%2==0){
        cout << "pari" << endl;
    }
    else{
        cout << "dispari" << endl;
    }
    
    return 0;
}