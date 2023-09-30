#include<iostream>

using namespace std;

/*
Presi in ingresso una lettera e un numero intero minore di 26, decifrare la 
lettera secondo il cifrario di Cesare. 
*/

int main(){
  int shift = 0;
  char c = 'a';

  cout << "Inserisci una lettera minuscola: ";
  cin >> c;
  cout << "Inserisci un numero intero minore di 26: ";
  cin >> shift;

  // Prima trovo la posizione della lettera nell'alfabeto
  int charPos = c - 'a';

  // Poi sottraggo lo shift
  int criptPos = charPos - shift;

  // Poi trovo la lettera corrispondente shiftata nell'alfabeto
  // Devo prima aggiungere il valore per cui faccio il modulo per
  // evitare che il risultato sia negativo
  int criptChar = (criptPos + ('z'-'a'+1)) % ('z'-'a'+1);

  // Infine lo rimetto nella codifica ASCII
  char ascii = criptChar + 'a';

  cout << "La lettera " << c 
       << " cifrata con il cifrario di Cesare con shift " 
       << shift << " è " << ascii << endl;

  return 0;
}
