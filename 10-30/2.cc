#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char testo[100];

    cout << "Inserisci una stringa: ";
    cin.getline(testo, sizeof(testo));

    char temp;
    int lunghezza = strlen(testo) / 2;
    for (int i = 0; i < lunghezza; i++) {
        temp = testo[i];
        testo[i] = testo[lunghezza * 2 - i - 1];
        testo[lunghezza * 2 - i - 1] = temp;
    }

    cout << "Stringa invertita: " << testo << endl;

    return 0;
}

