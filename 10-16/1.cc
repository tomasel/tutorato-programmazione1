/*
Si vuole calcolare il fattoriale di un qualsiasi numero intero (positivo) sfruttando una funzione ricorsiva.  
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).
*/

#include <iostream>

using namespace std;

unsigned long long factorial_rec (int n) {
  if (n == 1)
    return 1;
  return factorial_rec(n - 1) * n;
}

unsigned long long factorial_iter (int n) {
  unsigned long long res = 1;
  while (n > 0)
    res *= n--;
  return res;
}

int main () {

  int n;

  cout << "Inserisci un numero intero: ";
  cin >> n;
  cout << "Fattoriale ricorsivo: " << factorial_rec(n) << endl;
  cout << "Fattoriale iterativo: " << factorial_iter(n) << endl;

  return 0;
}
