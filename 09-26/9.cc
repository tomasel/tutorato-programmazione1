#include<iostream>

using namespace std;

/*
Scambiare il contenuto di due variabili numeriche senza usare una variabile
 d'appoggio. 
*/
int main(){
  int a = 0, b = 0;

  cout << "Inserisci due numeri interi: ";
  cin >> a >> b;

  cout << "Valori inseriti: a=" << a << ", b=" << b << endl;

  a += b;
  b = a - b;
  a -= b;

  cout << "Valori scambiati: a=" << a << ", b=" << b << endl;

  return 0;
}
