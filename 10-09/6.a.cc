/*
Scrivere un programmino che simuli una partita a sasso carta forbice su 5 turni tra due giocatori. A ogni turno estrarre
in maniera casuale un numero tra 1 e 3 compresi:

- 1 -> sasso
- 2 -> carta
- 3 -> forbice

Usare un enum per dichiare `sasso`, `carta`, `forbice`. 

Usare la funzione precedentemente scritta per farsi tornare il valore tra 1 e 3. 

Fare poi i controlli per valutare quale dei due giocatori ha vinto.

Aggiungere un ciclo while che chieda se si vuole continuare a giocare.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum scelta {sasso = 1, carta, forbice};

int sceltaComputer(){
    return rand() % 3 + 1;
}

int main (){
    // Inizializzazione della funzione rand
    srand(13);

    // Contatori dei punteggi dei giocatori
    int punteggioGioc1 = 0, punteggioGioc2 = 0;

    // Ciclo for per i 5 turni
    for (int i=0; i<5; i++){
        cout << "Turno " << (i+1) << endl;
        int sceltaGioc1 = sceltaComputer();
        int sceltaGioc2 = sceltaComputer();

        cout << "Giocatore 1: " << sceltaGioc1 << endl;
        cout << "Giocatore 2: " << sceltaGioc2 << endl;

        if (sceltaGioc1 == forbice && sceltaGioc2 == carta) {
            cout << "Giocatore 1 vince" << endl;
            punteggioGioc1 ++;
        }
        else if(sceltaGioc1 == carta && sceltaGioc2 == sasso) {
            cout << "Giocatore 1 vince" << endl;
            punteggioGioc1 ++;
        }
        else if(sceltaGioc1 == sasso && sceltaGioc2 == forbice) {
            cout << "Giocatore 1 vince" << endl;
            punteggioGioc1 ++;
        }
        else if(sceltaGioc1 == sceltaGioc2) {
            cout << "Pareggio" << endl;
            i--;
        }
        else {
            cout << "Giocatore 2 vince" << endl;
            punteggioGioc2 ++;
        }

    }

    if (punteggioGioc1 > punteggioGioc2){
        cout << "Giocatore 1 vince la partita" << endl;
    }
    else if (punteggioGioc1 < punteggioGioc2){
        cout << "Giocatore 2 vince la partita" << endl;
    }
    else {
        cout << "Pareggio" << endl;
    }

    return 0;
}