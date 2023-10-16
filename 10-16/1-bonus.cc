/*
Si vuole calcolare il fattoriale di un qualsiasi numero intero (positivo) sfruttando una funzione ricorsiva.  
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).
*/

#include <iostream>
#include <chrono>

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
  unsigned long long res;
  chrono::time_point<chrono::steady_clock> start, end;
  chrono::duration<double> time_span;

  cout << "Inserisci un numero intero: ";
  cin >> n;
  
  start = chrono::steady_clock::now();
  res = factorial_rec(n);
  end = chrono::steady_clock::now();
  time_span = chrono::duration_cast<chrono::duration<double>>(end - start);
  cout << "Fattoriale ricorsivo: " << res << " (in " << time_span.count() << " secondi)" << endl;
  
  start = chrono::steady_clock::now();
  res = factorial_iter(n);
  end = chrono::steady_clock::now();
  time_span = chrono::duration_cast<chrono::duration<double>>(end - start);
  cout << "Fattoriale iterativo: " << res << " (in " << time_span.count() << " secondi)" << endl;

  return 0;
}
