// Scrivere una procedura che ritorni gli indici di riga e colonna del primo valore massimo in una matrice di interi generati randomicamente, dopo averla mostrata a video.

#include <iostream>
using namespace std;

#define MAX 100
#define MIN 0

int main(){

  srand(time(0)); // seed

  int r = 5;
  int c = 6;
  int v[r][c];

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      v[i][j] = rand() % (MAX - MIN + 1) + MIN; 
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  int max_i = 0;
  int max_j = 0;
  int max = v[max_i][max_j];

  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      if (v[i][j] > max){
        max_i = i + 1;
        max_j = j + 1;
        max = v[i][j];
      }
    }
  }

  cout << max << " [" << max_i << "," << max_j << "]" << endl;
  return 0;
}
