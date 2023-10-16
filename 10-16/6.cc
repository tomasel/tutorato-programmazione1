
/**
 
Dato in input un numero n, in maniera ricorsiva chiedere all'utente di inserire una lettera per n volte e, sapendo che le lettere in maiuscolo valgono 10 mentre quelle in minuscolo valgono 5, calcolare e stampare a video la somma totale. È possibile usare la funzione islower(char) contenuta nella libreria cctype per controllare che il carattere in input sia minuscolo.

*/

#include <iostream>
#include <cctype>

using namespace std;

int main(){

    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    char lettera;

    int somma = 0;  

    for (int i = 0; i < n; i++){
        cout << "Inserisci una lettera: ";
        cin >> lettera;

        if (islower(lettera)){
            somma += 5;
        } else {
            somma += 10;
        }
    }

    cout << "La somma totale è: " << somma << endl;

    return 0; 
}
