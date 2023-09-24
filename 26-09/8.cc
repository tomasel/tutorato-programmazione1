#include<iostream>

using namespace std;

/*
Preso in ingresso un numero minore o uguale a 127, stampare a video il 
carattere corrispondente. 
*/

int main(){

  cout << "Inserisci un numero minore o uguale a 127: ";
  int n;
  cin >> n;

  cout << "Il carattere corrispondente al numero inserito in ASCII è " << (char)n << endl;

  return 0;
}
