/*
Dato un numero qualsiasi in ingresso, dire se il numero è palindromo, ossia se il numero può essere letto da destra a sinistra e viceversa. Per esempio 2002 e 30403 sono palindomi, mentre 2012 o 40340 non lo sono. 
*/

#include<iostream>

using namespace std;

int main()
{
  int n;
  cout << "Inserisci un numero minore di 1000000: "
  cin >> n;

  while(n>1000000){
    cout << "Numero inserito troppo grande" << endl;
    cout << "Inserisci un numero minore di 1000000: "
    cin >> n;
  }

  int n2 = n;
  int n3 = 0;
  while (n2 > 0) {
    n3 = n3 * 10 + n2 % 10;
    n2 = n2 / 10;
  }

  if (n == n3)
    cout << "palindromo" << endl;
  else
    cout << "non palindromo" << endl;

  return 0;
}
