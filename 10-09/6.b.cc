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

Il progamma chiede all'inizio se si vuole simulare la partita tra due computer, tra un giocatore e un computer, o se tra
due giocatori. Nel caso uno dei due sia un giocatore, prendere in input un valore tra 1 e 3 compresi, e fare i dovuti
controlli sul valore in ingresso. 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum scelta {sasso = 1, carta, forbice};

// Questa funzione come prima estrae un valore casuale tra 1 e 3 compresi
int sceltaComputer(){
    return rand() % 3 + 1;
}

// Questa funzione chiede al giocatore di inserire un numero tra 1 e 3 compresi, dopo di che controlla che il valore
// inserito sia corretto, altrimenti chiede di reinserire il valore
int sceltaGiocatore(int giocatore){
    int scelta = 0;

    cout << "Giocatore " << giocatore << " fai la tua scelta: ";
    cin >> scelta;

    while(scelta < 1 || scelta > 3){
        cout << "Scelta sbagliata, deve essere un valore tra 1 e 3 compresi" << endl;
        cout << "Giocatore " << giocatore << " fai la tua scelta: ";
        cin >> scelta;
    }

    return scelta;
}

int main (){
    // Inizializzazione della funzione rand
    srand(13);

    // Inizializzazione dei punteggi
    int punteggioGioc1 = 0, punteggioGioc2 = 0;

    // Variabili per sapere se un giocatore è un computer o meno
    bool realeGioc1 = false, realeGioc2 = false;

    // Variabile usata per prendere l'input dall'utente
    char sceltaTipoGiocatore = 'N';

    cout << "Scrivere S se giocatore 1 è reale, N altrimenti" << endl;
    cin >> sceltaTipoGiocatore;
    if (sceltaTipoGiocatore == 'S') {
        realeGioc1 = true;
    }

    cout << "Scrivere S se giocatore 2 è reale, N altrimenti" << endl;
    cin >> sceltaTipoGiocatore;
    if (sceltaTipoGiocatore == 'S') {
        realeGioc2 = true;
    }

    // Ciclo per i turni
    for (int i=0; i<5; i++){
        cout << "Turno " << (i+1) << endl;
        
        int sceltaGioc1 = 0, sceltaGioc2 = 0;

        // Controllo se il giocatore 1 è reale o meno
        if(realeGioc1){
            sceltaGioc1 = sceltaGiocatore(1);
        }
        else {
            sceltaGioc1 = sceltaComputer();
            cout << "Giocatore 1: " << sceltaGioc1 << endl;
        }

        // Controllo se il giocatore 2 è reale o meno
        if(realeGioc2){
            sceltaGioc2 = sceltaGiocatore(2);
        }
        else {
            sceltaGioc2 = sceltaComputer();
            cout << "Giocatore 2: " << sceltaGioc2 << endl;
        }

        // Faccio i controlli per il punteggio
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
        cout << endl;

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