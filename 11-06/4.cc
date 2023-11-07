#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char testo[100];
    char cerca[20];
    char sostituisci[20];

    cout << "Inserisci una frase: ";
    cin.getline(testo, sizeof(testo));

    cout << "Inserisci la sottostringa da cercare: ";
    cin.getline(cerca, sizeof(cerca));

    cout << "Inserisci la stringa di sostituzione: ";
    cin.getline(sostituisci, sizeof(sostituisci));

    int lunghezzaCerca = strlen(cerca);
    int lunghezzaSostituisci = strlen(sostituisci);

    for (long unsigned i = 0; i < strlen(testo); i++) {
        if (strncmp(testo + i, cerca, lunghezzaCerca) == 0) {
            cout << sostituisci;
            i += lunghezzaCerca - 1;
        } else {
            cout << testo[i];
        }
    }

    return 0;
}

