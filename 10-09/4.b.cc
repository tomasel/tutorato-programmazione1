/*
Modificare la funzione `calcolatrice` così che possa prendere un argomento in più e che salvi il valore in tale
parametro piuttosto di ritornarlo a fine esecuzione. 

Provare questo esercizio sia con i riferimenti che con i puntatori. 
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

void calcolatrice(char c, int a, int b, int &risultato){
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
    }
}

int main(){
    int a = 0, b = 0;
    cout << "Primo numero: ";
    cin >> a;
    cout << "Secondo numero: ";
    cin >> b;

    char c;
    cout << "Operazione: ";
    cin >> c;

    int risultato = 0;
    calcolatrice(c,a,b,risultato);
    cout << "Risultato: " << risultato << endl;
}
