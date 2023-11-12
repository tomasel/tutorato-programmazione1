# Strutture dati

## 1

Scrivere un programma che gestisca la collisione in una dimensione tra due blocchi caratterizzaati da due proprietà: 
- massa
- velocità

La formula per calcolare la velocità finale è la seguente:

```
V1 = -m2*v2/m1
V2 = -m1*v1/m2
```

Dove `m1` e `m2` sono le masse dei due blocchi, `v1` e `v2` le velocità iniziali  e `V1` e `V2` le velocità finali.
 
Basta che il programma gestisca una sola collisione e stampi le velocità finali.

## 2

Scrivere un programma per permettere la ricerca in un albero genealogico tramite il nome di una persona. 

Aiuto: Definire una persona con i campi: 
- nome
- madre
- padre
  
Dove madre e padre sono a loro volta struct di tipo persona.

Aiuto: inizializzare le persone che chiudolo l'albero (es. i nonni) con NULL, in modo da poter controllarne la presenza ed evitare seg. fault 

## 3

Scrivere un programma che permetta la gestione di una serie di macchine tramite `LinkedList`, definita nel seguente modo: 

```
struct LinkedList {
 // attributi utili
 // (...)
 // puntatore all'item successivo nella lista
 LinkedList * next; 
}; 
```

### 3.1
Scrivere una funzione che permetta di stampare tutti gli item all'interno della lista

### 3.2
Scrivere una funzione che ricerchi un determinato item all'interno della lista e lo rimuova. 

**N.B**: non è necessario de-allocare l'oggetto, basta manipolare il campo *next*

Usare la funzione creata in 3.1 per controllare che l'oggetto sia effettivamente stato rimosso

