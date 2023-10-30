#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char testo[100];
    int vocali = 0;

    cout << "Inserisci una frase: ";
    cin.getline(testo, sizeof(testo));

    for (long unsigned i = 0; i < strlen(testo); i++) {
        char carattere = tolower(testo[i]);
        if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u') {
            vocali++;
        }
    }

    cout << "Il numero di vocali nella frase è: " << vocali << endl;

    return 0;
}
