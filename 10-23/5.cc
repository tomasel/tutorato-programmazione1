#include <iostream>
using namespace std;

#define MAX 20
#define MIN 0
#define M 5
#define N 13

bool crescente(int*, int);
bool decrescente(int*, int);
bool ordinato(int*, int);
void copiaSpecchio(int*, int*, int, int);

int main () {

  int arr_m[M];
  int arr_n[N];

  cout << "Inserisci valori" << endl;

  for (int i = 0; i < M; ++i) {
    cin >> arr_m[i];
    if (i != M - 1)
      cout << "prossimo valore" << endl;
  }

  copiaSpecchio(arr_m, arr_n, M, N); 

  for (int i = 0; i < N+2; ++i)
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
        if (i % 2)
          arr_n[i * m + j] = arr_m[m - j%m - 1];
        else
          if (i * m + j >= n) break;
          else arr_n[i * m + j] = arr_m[j%m];
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
