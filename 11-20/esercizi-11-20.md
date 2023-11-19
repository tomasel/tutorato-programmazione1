---
header-includes:
    - '\usepackage[a4paper]{geometry}'
documentclass: article
fontsize: 12pt
---

# Manipolazione di strutture dati

## 1

Scrivere un programma che ordini gli item di una linked list usando l'algoritmo di sorting `BubbleSort`.

## 2

Scrivere un programma che data una Linked list, permetta di spostare una sezione arbitraria da una posizione della lista a un'altra. 

La funzione dovrebbe avere questa signature: 

```.cc
LinkedListNode* moveChunk(LinkedListNode* head, int startIndex, 
                          int lenOfChunk, int endIndex); 
```

## 3

Viene data la seguente struttura

```.cc {.numberLines}
struct dataStruct {
    int *data;
    int size, numData;
};
```

utilizzata per gestire un array dinamico `data` di interi con il supporto di `size` -- che indica la dimensione massima di `data` -- e `numData` -- che invece indica il numero attuale di elementi presenti in `data`.  
Scrivere due funzioni per inserire e rimuovere un elemento dalla struttura. I prototipi delle funzioni sono:

```.cc
void insertInBucket(dataStruct bucket, int newItem);
int removeFromBucket(dataStruct bucket, int index);
```

La prima deve ricevere un nuovo elemento e modificare opportunamente i campi `numData` e `size`. La seconda deve ricevere l'indice di un elemento da rimuovere, modificare opportunamente le dimensioni e ritornare il valore rimosso.
Attenzione alla gestione dei valori `size` e `numData`!

*Consiglio*: un modo efficiente per allocare nuova memoria è quello di raddoppiare `size` ogni qual volta `numData == size`{.cc}. In questo modo si è sicuri che il numero di operazioni per l'allocazione di nuova memoria cresca logaritmicamente con la lunghezza della struttura che è quindi un'operazione efficiente.
