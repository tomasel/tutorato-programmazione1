# Ricorsione e iterazione

## 1 (9 ottobre)

Scrivere una funzione ricorsiva che calcoli il fattoriale di un qualsiasi numero intero.
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).

Bonus: 
Usare la libreria std::chrono::steady_clock per misurare quanto ogni funzione impiega.
Per ottenere un tempo attuale è possibile usare:

```
chrono::time_point<std::chrono::steady_clock> start = chrono::steady_clock::now();
```

Prendendo il tempo prima e dopo la funzione che si vuole misurare (tempo1 e tempo2) è possibile sottrarli (tempo2 - tempo1) e ottenere la durata 

## 2 (9 ottobre)

Scrivere una funzione ricorsiva che calcoli la somma tra due numeri interi **positivi**.

Bonus: calcolare anche prodotto e potenza (ad esempio con `potenzaRicorsiva(int base, int esponente)`).

## 3

Creare una funzione che riceve un numero e restituisce la somma delle cifre del numero solo quando questa è minore di 10. Deve altrimenti restituire il risultato della funzione applicata alla somma delle cifre del numero.  
Ad esempio:

1. riceve 15, esegue `f(15) = 1 + 5 = 6`, restituisce 6
2. riceve 392, esegue `f(392) = 3 + 9 + 2 = 14 > f(14) = 1 + 4 =  5`, restituisce 5
