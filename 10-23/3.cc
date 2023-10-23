/*
Scrivere una procedura che presi in ingresso le dimensioni $M$, $N$ della
matrice $(MxN)$ e un vettore di dimensione $N$, aggiunga il vettore ad ogni
riga della matrice: 

```
Mat[3][4] = [
  [1,2,3,4],
  [5,6,7,8],
  [9,0,1,2]
]

V[4] = [1,2,3,4]

Res[3][4] = [
  [2,4,6,8],
  [6,8,10,11],
  [10,2,4,6]
]
```
*/

#include <iostream>
using namespace std;

void addVectorToMatrix(int M, int N, int matrix[][N], int vector[N]) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      matrix[i][j] += vector[j];
  }
}

int main() {
  int M = 3, N = 4;

  int matrix[M][N] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,0,1,2}
  };
  int vector[N] = {1,2,3,4};

  addVectorToMatrix(M, N, matrix, vector);

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }

  return 0;
}