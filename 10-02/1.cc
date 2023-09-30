#include <iostream>

using namespace std;

#define ALPHDIM 26
#define UPCASELOW 64
#define UPCASEHIG 91
#define LOCASELOW 96
#define LOCASEHIG 123

int main () {

  int n;
  char c;

  // Leggo n e controllo che non sia più grande di 26
  // (potrei anche decidere di accettare qualsiasi numero positivo e considerarlo in mod26)
  cin >> n;

  if (n < 0 || n > ALPHDIM) {
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
    cout << (char)((c + n - UPCASELOW) % ALPHDIM + UPCASELOW) << endl;
  else
    cout << (char)((c + n - LOCASELOW) % ALPHDIM + LOCASELOW) << endl;

  return EXIT_SUCCESS;
}
