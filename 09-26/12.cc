#include<iostream>

using namespace std;

/*
Scrivere un programma che prende in ingresso un numero e stampi 0 se pari o 1 
se è dispari.
*/

int main(){
  int n;

  cout << "Inserisci un numero: ";
  cin >> n;

  cout << n%2 << endl;

  return 0;
}
