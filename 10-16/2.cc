/*
Scrivere una funzione ricorsiva che calcoli la somma tra due numeri interi positivi.
(si può fare in più modi)
*/

#include <iostream>

using namespace std;

int sommaRic(int a, int b) {
  if (a == 0)
    return b;
  if (b == 0)
    return a;
  return sommaRic(a - 1, b - 1) + 2;
}

int prodotto(int a, int b) {
  if (b == 0)
    return 0;
  return prodotto(a, b - 1) + a;
}

int prodottoRic(int a, int b) {
  if (a > b)
    return prodotto(a, b);
  else
    return prodotto(b, a);
}

int potenzaRic(int base, int esponente) {
  if (esponente == 0)
    return 1;
  return potenzaRic(base, esponente - 1) * base;
}

int main () {

  int a, b;
  
  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  cout <<
    a <<
    " + " <<
    b <<
    " = " <<
    sommaRic(a, b) << endl;
  cout <<
    a <<
    " * " <<
    b <<
    " = " <<
    prodottoRic(a, b) << endl;  // usa una funzione d'appoggio per fare una piccola ottimizzazione
  cout <<
    a <<
    " ^ " <<
    b << 
    " = " << potenzaRic(a, b) << endl;

  return 0;
}
