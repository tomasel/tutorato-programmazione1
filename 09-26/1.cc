#include<iostream>

using namespace std;

int main(){

  // Tabella di verità della seguente formula: (A -> B) and ((B -> not A) and not A)
  // L'implicazione logica A->B corrisponde a (!A || B)
  bool A, B;

  cout << "A\t" << "B\t" << "Risultato" << endl;

  A=true;
  B=true;
  cout << A << "\t" << B << "\t" << ((!A || B) || ((!B || !A) && !A)) << endl;
  
  A=true;
  B=false;
  cout << A << "\t" << B << "\t" << ((!A || B) || ((!B || !A) && !A)) << endl;

  A=false;
  B=true;
  cout << A << "\t" << B << "\t" << ((!A || B) || ((!B || !A) && !A)) << endl;

  A=false;
  B=false;
  cout << A << "\t" << B << "\t" << ((!A || B) || ((!B || !A) && !A)) << endl;

  return 0;
}

