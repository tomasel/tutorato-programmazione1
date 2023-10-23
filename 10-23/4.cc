#include <iostream>
using namespace std;

#define MAX 20
#define MIN 0

bool crescente(int*, int);
bool decrescente(int*, int);
bool ordinato(int*, int);
void copiaSpecchio(int*, int*, int, int);

int main () {

  int m = 0;
  int n = 0;

  cout << "Inserisci m: "; cin >> m;

  do {
    cout << "Inserisci n > m: "; cin >> n;
  } while (n < m);

  int arr_m[m];
  int arr_n[n];

  cout << "Inserisci valori" << endl;

  for (int i = 0; i < m; ++i) {
    cin >> arr_m[i];
    if (i != m - 1)
      cout << "prossimo valore" << endl;
  }

  copiaSpecchio(arr_m, arr_n, m, n); 

  for (int i = 0; i < n; ++i)
    cout << arr_n[i] << " ";
  cout << endl;

  return 0;
}

bool ordinato(int* arr, int m) {
  return crescente(arr, m) || decrescente(arr, m);
}

void copiaSpecchio(int* arr_m, int* arr_n, int m, int n) {
  if (ordinato(arr_m, m)) {
    // considero arr_n come una "matrice"
    // siccome è un array, sfrutto gli indici per gestirlo
    // come se fosse disposto in n/m righe lunghe m
    // (l'ultima riga può essere più corta di m)
    for (int i = 0; i < n/m + 1; ++i) {
      for (int j = 0; j < m; ++j) {
        if (!(i % 2))
          arr_n[i * m + j] = arr_m[m - j%m - 1];
        else
          arr_n[i * m + j] = arr_m[j%m];
      }
    }
  } else {
    for (int i = 0; i < n; ++i) {
      if (i < m)
        arr_n[i] = arr_m[i];
      else
        arr_n[i] = 0;
    }
  }
}

bool decrescente(int* arr, int m) {
  for (int i = 1; i < m; ++i) {
    if (arr[i - 1] < arr[i])
      return false;
  }
  return true;
}

bool crescente(int* arr, int m) {
  for (int i = 1; i < m; ++i) {
    if (arr[i - 1] > arr[i])
      return false;
  }
  return true;
}
