# Puntatori e riferimenti

## 1

Dati in input prezzo e sconto, scrivere una funzione che calcoli il costo scontato.
Scrivere la funzione con passaggio per valore, per indirizzo e per riferimento (che differenze ci sono?).

## 2

Scrivere una funzione `void mySwap (int*, int*)` che esegua lo scambio dei valori di due variabili tipo `int`.

## 3

Scrivere una funzione `void genericSwap (void*, void*, bool)` che esegua un controllo sul parametro booleano e decida se eseguire uno scambio tra puntatori di tipo `int` o di tipo `char`.

# Figure

Mostrare a video le seguenti figure (sfruttare loop e condizioni):

## 4.1

```
x   x   x   x   x

x               x

x               x

x               x

x   x   x   x   x
```

## 4.2

```
x       x       x

    x   x   x

x   x   x   x   x

    x   x   x

x       x       x
```

## 4.3

```
o   H   H   H   o

-   o   H   o   H

-   -   o   H   H   

-   o   -   o   H

o   -   -   -   o
```

# Ricorsione e iterazione

## 5

Scrivere una funzione ricorsiva che calcoli la somma tra due numeri interi **positivi**.

## 6

Scrivere una funzione ricorsiva che calcoli il fattoriale di un qualsiasi numero intero.
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).

Bonus: 
Usare la libreria std::chrono::steady_clock per misurare quanto ogni funzione impiega.
Per ottenere un tempo attuale è possibile usare:

```
chrono::time_point<std::chrono::steady_clock> start = chrono::steady_clock::now();
```

Prendendo il tempo prima e dopo la funzione che si vuole misurare (tempo1 e tempo2) è possibile sottrarli (tempo2 - tempo1) e ottenere la durata 
