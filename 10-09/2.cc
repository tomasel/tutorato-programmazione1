#include <iostream>

using namespace std;

void mySwap (int* p1, int* p2) {
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

int main () {

  int a, b;

  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;

  mySwap(&a, &b);
  
  cout << "a: " << a << endl << "b: " << b << endl;

  return 0;
}
