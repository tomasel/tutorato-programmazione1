#include <iostream>
#include <cstring>

using namespace std;

struct Persona {
  char nome[50];
  char madre[50];
  char padre[50];
  int numeroFigli = 0;
};


int main() {
  Persona Persone[10] = {
    {"Giulia", "Anna", "Mario"},
    {"Anna", "Maria", "Luigi"},
    {"Mario", "", ""},
    {"Maria", "", ""},
    {"Luigi", "", ""},
    {"Giorgio", "Anna", "Mario"},
    {"Gianni", "Anna", "Mario"},
    {"Giangiacomo", "Anna", "Luigi"},
    {"Gianmarria", "Anna", "Luigi"},
    {"Michela", "Anna", "Mario"}
  };

  // Trova persona con maggior numeri di figli
  for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
      if (strcmp(Persone[j].nome, Persone[i].madre) == 0){
        Persone[j].numeroFigli++;
      }
      if (strcmp(Persone[j].nome, Persone[i].padre) == 0){
        Persone[j].numeroFigli++;
      }
    }
  }

  char nome[50];
  int max = 0;
  for (int i=0; i<10; i++){
    if (Persone[i].numeroFigli > max){
      max = Persone[i].numeroFigli;
      strcpy(nome, Persone[i].nome);
    }
  }

  cout << "La persona con più figli è " << nome << " con " << max << " figli." << endl;

  // Trovare il nonno/a con più nipoti
  int maxNipoti = 0;
  char nomeNonno[50];
  for (int i=0; i<10; i++){
    int nipoti = 0;
    for (int j=0; j<10; j++){
      if (strcmp(Persone[j].madre, Persone[i].nome) == 0){
        for (int k=0; k<10; k++){
          if (strcmp(Persone[k].madre, Persone[j].nome) == 0){
            nipoti++;
          }
        }
      }
      if (strcmp(Persone[j].padre, Persone[i].nome) == 0){
        for (int k=0; k<10; k++){
          if (strcmp(Persone[k].madre, Persone[j].nome) == 0){
            nipoti++;
          }
        }
      }
    }
    if (nipoti > maxNipoti){
      maxNipoti = nipoti;
      strcpy(nomeNonno, Persone[i].nome);
    }
  }

  cout << "Il nonno/a con più nipoti è " << nomeNonno << " con " << maxNipoti << " nipoti." << endl;

  return 0;
}

