#include<iostream>

using namespace std;

int main() {
  int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
  int num = 0;

  cout << "Inserisci un numero: ";
  cin >> num;

  bit1 = num%2;
  num /= 2;
  bit2 = num%2;
  num /= 2;
  bit3 = num%2;
  num /= 2;
  bit4 = num%2;
  num /= 2;
  bit5 = num%2;
  num /= 2;
  bit6 = num%2;
  num /= 2;
  bit7 = num%2;
  num /= 2;
  bit8 = num%2;

  cout << "Il valore in binario è: " << 
    bit8 << bit7 << bit6 << bit5 <<
    bit4 << bit3 << bit2 << bit1 << endl;
  
  return 0;
}
