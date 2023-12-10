#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

// Massimo numero di caratteri di una parola
const int MAX_LENGTH = 100;

// Massimi elementi singoli
const int MAX_WORDS = 100;

int main(int argc, char *argv[]) {

  // Array che conterrà tutte le parole lette
  char database[MAX_WORDS][MAX_LENGTH];

  // Array che conterrà il conteggio di tutte le parole lette
  int contatore[MAX_WORDS];

  // Buffer di lettura
  char buffer[MAX_LENGTH];

  // Contatore delle parole lette
  int parole_lette = 0;

  return 0;
}
