/*
Riprendere il programma dell'esercizio 9. Una volta fatta la prima operazione, il programma continua a richiedere un nuovo operatore e un nuovo numero fintanto che non viene inserito il simbolo \$. Ogni volta che un nuovo numero e operatore vengono inseriti, il programma esegue l'operazione mettendo come primo numero il risultato ottenuto precedentemente e come secondo il nuovo numero. 

Per esempio, il programma prende in ingresso due numeri all'inizio 3 e 4 e l'operatore *. Esegue l'operazione e ottiene 12. Se l'utente ora inserisce l'operatore \$, il programma termina, altrimenti se inserisce per esempio il simbolo / e successivamente il numero 2, verrà eseguita la divisione 12/2 e stampato il valore. 
*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2, res;
    char op;
    bool goon = true;

    cout << "Inserisci il primo numero: ";
    cin >> n1;
    cout << "Inserisci il secondo numero: ";
    cin >> n2;
    cout << "Inserisci un operatore tra {+,-,*,/}: ";
    cin >> op;

    switch(op){
        case '+':
            res = n1+n2;
            break;
        case '-':
            res = n1-n2;
            break;
        case '*':
            res = n1*n2;
            break;
        case '/':
            res = n1/n2;
            break;
        default:
            cout << "Operatore non valido" << endl;
            goon = false;
    }

    while (goon){
        cout << "Risultato: " << res << endl;
    
        cout << "Inserisci un operatore tra {+,-,*,/,$}: ";
        cin >> op;

        if(op=='$'){
            goon = false;
        }
        else{
            cout << "Inserisci un numero: ";
            cin >> n2;

            switch(op){
                case '+':
                    res += n2;
                    break;
                case '-':
                    res -= n2;
                    break;
                case '*':
                    res *= n2;
                    break;
                case '/':
                    res /= n2;
                    break;
                default:
                    cout << "Operatore non valido" << endl;
                    goon = false;
            }
            
        }
    }

    return 0;
}