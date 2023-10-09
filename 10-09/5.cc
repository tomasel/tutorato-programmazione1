/*
La libreria `cstdlib` contiene due funzioni per generare numeri randomici. La prima funzione è `void srand(unsigned int)`
che prende in ingresso un "seed", ossia un valore di inizializzazione e deve essere chiamata una sola volta all'inizio
del main. Per il nostro scopo possiamo scegliere un qualsiasi valore di inizializzazione, diciamo 13. La seconda funzione
è `int rand()` che genera un numero casuale. Per avere un numero casuale limitato in un certo range $[A,B)$, possiamo 
scrivere `rand() % B + A`.

```C++
#include<cstdlib>

// Vostra funzione che conterrà rand()

int main(){
  srand(13);

  return 0;
}
```

Scrivere una funzione, che presi come argomenti due valori A e B, ritorni numeri casuali pari nell'intervallo e stampare
il valore di ritorno nel main. 

Riavviare più volte il programma. Cosa notate? Cosa succede se si cambia il valore di inizializzazione di `srand()`?
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int pari(int A, int B){
    int risposta = rand() % B + A;
    while(risposta % 2 != 0){
        risposta = rand() % B + A;
    }
    return risposta;
}

int main(){
    srand(131);

    int A = 0, B = 0;
    cout << "Primo numero: ";
    cin >> A;
    cout << "Secondo numero: ";
    cin >> B;

    cout << "Numero casuale pari nell'intervallo: " << pari(A,B) << endl;
}