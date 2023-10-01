#include <iostream>

using namespace std;

#define ALPHDIM 26
#define UPCASELOW 'A' - 1 // sottraggo e aggiungo 1 per evitare di riscriverlo nei controlli if
#define UPCASEHIG 'Z' + 1
#define LOCASELOW 'a' - 1
#define LOCASEHIG 'z' + 1

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
  // Attenzione: il +1 è necessario per correggere i +1 e -1 definiti nelle costanti
  if (c > UPCASELOW && c < UPCASEHIG)
    cout << (char)((c - n - UPCASELOW + ALPHDIM + 1) % ALPHDIM + UPCASELOW + 1) << endl;
  else
    cout << (char)((c - n - LOCASELOW + ALPHDIM + 1) % ALPHDIM + LOCASELOW + 1) << endl;

  return EXIT_SUCCESS;
}
