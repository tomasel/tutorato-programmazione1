/*
Scrivere una procedura che

- riempia di 1 e 0 una matrice di dimensione 10x10,
- la stampi a video
- dica quanti gruppi di 1 in celle vicine ci sono. Due celle sono vicine se sono sulla stessa colonna o se sono sulla stessa riga. 

```
[
  1,1,1,1,1,0,1
  0,1,1,1,1,0,0
  0,0,0,0,0,0,0
  1,0,1,1,1,1,1
  0,1,0,0,0,0,0
  1,1,1,1,1,1,1
  0,0,0,0,0,0,0
]
```

In questo caso ci sono 5 gruppi di 1. In alto a sinistra c'è un gruppo di nove 1, in altro a destra c'è un gruppo di un uno, al centro a sinistra c'è un gruppo di un uno, in centro a destra c'è un gruppo di 5 uno, in basso c'è un gruppo di otto 1.

Bonus point per dire quali sono le dimensioni dei gruppi. 

Modificare poi la procedura in modo che le dimensioni siano $100x100$ e che la matrice venga stampata solo se la somma delle dimensioni sia minore o uguale a **20**.

L'idea è di colorare ogni gruppo, ossia di associare ad ogni gruppo un id. Se il numero che sto controllando è zero, allora il suo id rimane lo stesso. Se invece fosse un 1, allora ci sono le seguenti possibilità:
- Non ha altri vicini con un id già noto, allora è il primo 1 che incontro per quel gruppo e gli assegno un nuovo id
- Ha vicini con un id già noto, allora quello diventa il suo id
Per id s'intende una variabile numerica che partendo da due viene incrementata ogni volta che si incontra un nuovo gruppo
*/

#include <iostream>
#include <cstdlib> // Per le funzioni rand() e srand()
using namespace std;

#define MAX 4

// Procedura per stampare a video una matrice
void printMatrix(int M, int N, int matrix[][MAX]) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      cout << matrix[i][j] << " ";
    cout << endl;
  }
}

// Procedura per inizializzare randomicamente una matrice
void fillMatrix(int M, int N, int matrix[][MAX]) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++)
      matrix[i][j] = rand() % 2;
  }
}

// Procedura per contare il numero di gruppi con 1 vicini
void findRegions(int M, int N, int matrix[][MAX]) {
  int countGroups = 2;

  cout << endl;

  // Scorro la matrice e la coloro
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (matrix[i][j] == 1){
        // Se trovo un uno e sopra, sotto, a destra o a sinistra c'è un numero maggiore di 1, allora lo cambio con quel numero
        if (i>0 && matrix[i-1][j] > 1) {
          matrix[i][j] = matrix[i-1][j];
        }
        else if (j>0 && matrix[i][j-1] > 1) {
          matrix[i][j] = matrix[i][j-1];
        }
        else if (i<M-1 && matrix[i+1][j] > 1) {
          matrix[i][j] = matrix[i+1][j];
        }
        else if (j<N-1 && matrix[i][j+1] > 1) {
          matrix[i][j] = matrix[i][j+1];
        }
        else {
          // E' il primo 1 del suo gruppo
          matrix[i][j] = countGroups;
          countGroups++;
        }
      }
    }
  }

  cout << endl;
  printMatrix(M, N, matrix);
  cout << endl;

  cout << "Nella matrice ci sono " << (countGroups-2) << " gruppi di 1 vicini" << endl;

  // Stampa il numero di elementi che ci sono per ogni gruppo
  for (int i=2; i<countGroups; i++){
    int count = 0;
    for (int j=0; j<M; j++){
      for (int k=0; k<N; k++){
        if (matrix[j][k] == i)
          count++;
      }
    }
    if (count>1){
      cout << "Il gruppo " << i << " ha " << count << " elementi" << endl;
    }
    else {
      cout << "Il gruppo " << i << " ha " << count << " elemento" << endl;
    }
  }

}


int main() {
  srand(13);

  int M = MAX, N = MAX;

  int matrix[MAX][MAX];

  fillMatrix(M, N, matrix);
  printMatrix(M, N, matrix);
  findRegions(M, N, matrix);

  return 0;
}
