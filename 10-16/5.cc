
/*

   Dati in input tre interi positivi in tre variabili (n1, n2, n3), scrivere una funzione che con una procedura “ri-ordini” i numeri in ordine crescente.

Bonus: Riscrivere la funzione usando il passaggio di parametri per riferimento.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

void printInOrdine(int n1, int n2, int n3){
  if (n1 > n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  if (n2 > n3) {
    int tmp = n2;
    n2 = n3;
    n3 = tmp;
  }

  if (n1 > n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  cout << n1 << " " << n2 << " " << n3 << endl;
}

// funzione con parametri per riferimento
void printInOrdine2(int &n1, int &n2, int &n3){
  if (n1 > n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  if (n2 > n3) {
    int tmp = n2;
    n2 = n3;
    n3 = tmp;
  }

  if (n1 > n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
  }

  cout << n1 << " " << n2 << " " << n3 << endl;
}


int main() {

  int n1, n2, n3;
  cout << "Inserisci tre numeri interi positivi: ";
  cin >> n1 >> n2 >> n3;

  printInOrdine(n1, n2, n3);

  printInOrdine2(n1, n2, n3);

  return 0;
}

