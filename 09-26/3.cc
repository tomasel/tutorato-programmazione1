#include<iostream>

using namespace std;

/*
Scrivere un programma che presi in ingresso 3 valori booleani (0,1), calcoli 
il risultato della seguente formula logica:

(A and B) or (!A and !B) or C
*/

int main(){
  bool A, B, C;

  cin >> A >> B >> C;

  cout << ((A && B) || (!A && !B) || C) << endl;
  
  return 0;
}
