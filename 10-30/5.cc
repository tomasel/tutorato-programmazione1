#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Uso: calcolatrice operando1 operazione operando2" << endl;
        return 1;
    }

    double operando1 = atof(argv[1]);
    char operazione = argv[2][0];
    double operando2 = atof(argv[3]);

    double risultato;

    switch (operazione) {
        case '+':
            risultato = operando1 + operando2;
            break;
        case '-':
            risultato = operando1 - operando2;
            break;
        case '*':
            risultato = operando1 * operando2;
            break;
        case '/':
            if (operando2 == 0) {
                cout << "Errore: divisione per zero." << endl;
                return 1;
            }
            risultato = operando1 / operando2;
            break;
        default:
            cout << "Operazione non valida." << endl;
            return 1;
    }

    cout << "Risultato: " << risultato << endl;
    return 0;
}

