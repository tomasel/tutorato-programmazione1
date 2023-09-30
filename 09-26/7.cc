#include<iostream>

using namespace std;

/*
Prese in ingresso 4 cifre che siano 1 e 0, scrivere il decimale corrispondente.

Prese le 4 cifre 1001, il corrispondente decimale è 9.
*/

int main(){

  int a, b, c, d;

  cout << "Inserisci 4 cifre binarie separate da spazi: ";
  cin >> a >> b >> c >> d;

  cout << a*8 + b*4 + c*2 + d*1 << endl;

  return 0;
}
