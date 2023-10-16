/*
Si vuole calcolare il fattoriale di un qualsiasi numero intero (positivo) sfruttando una funzione ricorsiva.  
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).
*/

#include <iostream>

using namespace std;

unsigned long long factorial (int n) {
  if (n == 1)
    return 1;
  return factorial(n - 1) * n;
}

int main () {

  int n, res = 1;

  cout << "Inserisci un numero intero: ";
  cin >> n;
  cout << "Fattoriale ricorsivo: " << factorial(n) << endl;
  while (n > 0)
    res *= n--;
  cout << "Fattoriale iterativo: " << res << endl;

  return 0;
}
