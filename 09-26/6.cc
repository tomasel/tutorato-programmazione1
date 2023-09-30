#include<iostream>

using namespace std;

/*
Preso in ingresso un numero minore di 256, trasformalo in binario.

Dato il numero 200 il binario è: 1100100
*/

int main(){

  cout << "Inserisci un numero minore di 256: ";
  int n;
  cin >> n;

  cout << (int)(n/128);
  n = n%128;
  cout << (int)(n/64);
  n = n%64;
  cout << (int)(n/32);
  n = n%32;
  cout << (int)(n/16);
  n = n%16;
  cout << (int)(n/8);
  n = n%8;
  cout << (int)(n/4);
  n = n%4;
  cout << (int)(n/2);
  n = n%2;
  cout << (int)(n/1);
  n = n%1;
  cout << endl;

  return 0;
}
