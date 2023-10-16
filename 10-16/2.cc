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

int main () {

  int a, b;
  
  cout << "a: ";
  cin >> a;

  cout << "b: ";
  cin >> b;

  cout << sommaRic(a, b) << endl;

  return 0;
}
