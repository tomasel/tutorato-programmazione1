#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Uso: contaparole 'testo'" << endl;
        return 1;
    }

    char* testo = argv[1];
    int parole = 0;
    bool inParola = false;

    for (long unsigned i = 0; i < strlen(testo); ++i) {
        if (isalpha(testo[i])) { // isalpha ritorna 0 se testo[i] è un carattere non alfabetico
                                 // in questo caso se è uno spazio o un numero
            if (!inParola) {
                parole++;
                inParola = true;
            }
        } else {
            inParola = false;
        }
    }

    cout << "Il numero di parole nel testo è: " << parole << endl;
    return 0;
}

