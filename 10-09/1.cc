#include <iostream>

using namespace std;

float costo(float prezzo, float sconto) {
  return prezzo * sconto;
}

float costoI(float* prezzo, float* sconto) {
  return *prezzo * *sconto;
}

float costoR(float& prezzo, float& sconto) {
  return prezzo * sconto;
}

int main () {
  
  float prezzo, sconto;
  
  cout << "Prezzo: ";
  cin >> prezzo;

  cout << "\nSconto: ";
  cin >> sconto;

  cout << "\nPrezzo scontato: " << costo(prezzo, sconto) << endl;
  cout << "Prezzo scontato: " << costoI(&prezzo, &sconto) << endl;
  cout << "Prezzo scontato: " << costoR(prezzo, sconto) << endl;

  return 0;
}
