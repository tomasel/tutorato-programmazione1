#include <iostream>

using namespace std;

// calcolo i valori ASCII di a, z, A, Z
#define ALPHDIM ((int)'z' - (int)'a' + 1) // 26
#define UPCASELOW ((int)'A' - 1) // 64
#define UPCASEHIG ((int)'Z' + 1) // 91
#define LOCASELOW ((int)'a' - 1) // 96
#define LOCASEHIG ((int)'z' + 1) // 123


int main () {

  int shift;
  char c;

  cout << ALPHDIM << " " << UPCASELOW << " " << UPCASEHIG << " " << LOCASELOW << " " << LOCASEHIG << endl;

  // Leggo n e controllo che non sia più grande di 26
  // (potrei anche decidere di accettare qualsiasi numero positivo e considerarlo in mod26)
  cin >> shift;

  if (shift < 0 || shift > ALPHDIM) {
    cerr << "numero troppo grande" << endl;
    return EXIT_FAILURE;
  }

  // Leggo il carattere da cifrare e controllo che sia un carattere alfabetico, ovvero
  // che la sua codifica ASCII corrisponda a quella di una lettera
  cin >> c;

  if (!(c > UPCASELOW && c < UPCASEHIG) && !(c > LOCASELOW && c < LOCASEHIG)) {
    cerr << "carattere non alfabetico" << endl;
    return EXIT_FAILURE;
  }

  // Se il carattere è maiuscolo, stampa la sua cifratura maiuscola, altrimenti stampa
  // quella minuscola
  if (c > UPCASELOW && c < UPCASEHIG)
    cout << (char)((c + shift - UPCASELOW) % ALPHDIM + UPCASELOW) << endl;
  else
    cout << (char)((c + shift - LOCASELOW) % ALPHDIM + LOCASELOW) << endl;

  return EXIT_SUCCESS;
}
