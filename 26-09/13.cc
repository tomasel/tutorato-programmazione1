#include<iostream>

using namespace std;

/*
Scrivere un programma che prende in ingresso un numero e stampi 0 se dispari o 1 se è pari,
senza usare gli if. 
*/

int main(){
  int n;

  cout << "Inserisci un numero: ";
  cin >> n;

  cout << ((n+1)%2) << endl;
  cout << (!(n%2)) << endl;
  cout << (1-(n%2)) << endl;

  return 0;
}
