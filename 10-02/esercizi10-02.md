# Esercizi 02-10-2023

## 1 Cifrario di Cesare

Presi in ingresso una lettera (maiuscola o minuscola) e un numero intero minore di 26, cifrare la lettera con il cifrario di Cesare.
Controllare i dati inseriti e, se necessario, segnalare sullo standard error il problema (ad esempio `cerr << "numero troppo grande";`)
e terminare il programma.

## 2

Come l'esercizio 1, ma questa volta decifrare la lettera. Invece di terminare il programma se l'input ricevuto è errato,
chiedere all'utente di inserire un nuovo valore (utilizzare un while o do-while).

## 3.a Parità e controllo `if`

Scrivere un programma che prende in ingresso un numero e stampi 0 se pari o 1 se è dispari, senza usare gli if.

## 3.b

Scrivere un programma che prende in ingresso un numero e stampi 0 se dispari o 1 se è pari, senza usare gli if.

## 4

Scrivere un programma che prende in ingresso un numero e stampi "pari" se pari o "dispari" se è dispari, usando un if.

## 5 `for` e `while`

Considerate il seguente ciclo for:

```c++
int sum = 0;
for (int i=0; i<10; i++){
    sum += i;
}
cout << sum << endl;
```

Riscriverlo come un ciclo while. 

## 6.a

Preso un numero in ingresso, scrivere la tabellina di quel numero da 0 a 10 usando un ciclo for.

## 6.b

Modificare il ciclo dell'esercizio precedente in modo che il programma continui a chiedere numeri di cui stampare
la tabellina. Terminare il programma solo se il numero inserito è 0. 

## 7 Codifica

Preso in ingresso un numero naturale, trasformarlo in binario.

Dato il numero 200 il binario è: 11001000

## 8

Prendere in ingresso il numero `n` di cifre binarie da trasformare in decimale. Quindi prendere in ingresso le `n` 
cifre binarie e infine stampare a video il decimale corrispondente. 

Per esempio, preso `n=5` e le cifre binarie `1 0 1 0 1`, il valore decimale corrispondente è
21. 

## 9 Fattoriale

Scrivere un programma che, preso in ingresso un numero, calcoli il suo fattoriale. 

Il fattoriale di un numero è dato dalla seguente funzione:

$n! = \displaystyle\prod_{k=1}^nk$

Ossia è la moltiplicazione di tutti i numeri interi maggiori di 0 minori o uguali al numero stesso. Per esempio, il
fattoriale di:

- $1! = 1$
- $2! = 1\times 2 = 2$
- $3! = 1\times 2\times 3 = 6$
- $10! = 1\times 2\times 3\times 4\times ... \times 10 = 3628800$

## 10 Calcolatrice

Scrivere un programma che implementi una calcolatrice per numeri interi, ossia che prenda in ingresso due numeri e un carattere ('+','-','*','/') e che calcoli poi il risultato dell'operazione.
