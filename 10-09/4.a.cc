/*
Scrivere una funzione per la somma, una per la sottrazione, una per la moltiplicazione e una per la divisione. 
Scrivere poi una funzione `calcolatrice` che, passati come parametri un carattere e due numeri, decida in base 
al carattere che funzione chiamare e ne ritorni il risultato:

- 'a': addizione
- 's': sottrazione
- 'm': moltiplicazione
- 'd': divisione
*/

#include <iostream>
using namespace std;

int somma(int a, int b){
    return a+b;
}

int sottrazione(int a, int b){
    return a-b;
}

int moltiplicazione(int a, int b){
    return a*b;
}   

int divisione(int a, int b){
    return a/b;
}

int main (){
    int a = 0, b = 0;
    cout << "Primo numero: ";
    cin >> a;
    cout << "Secondo numero: ";
    cin >> b;

    char c;
    cout << "Operazione: ";
    cin >> c;

    int risultato = 0;

    if (c == 'a'){
        risultato = somma(a,b);
    }
    else if (c == 's'){
        risultato = sottrazione(a,b);
    }
    else if (c == 'm'){
        risultato = moltiplicazione(a,b);
    }
    else if (c == 'd'){
        risultato = divisione(a,b);
    }
    else{
        cout << "Errore" << endl;
        risultato = 0;
    }

    cout << "Risultato: " << risultato << endl;

    return 0;
}