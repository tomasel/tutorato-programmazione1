---
header-includes:
    - '\usepackage[a4paper]{geometry}'
documentclass: article
fontsize: 12pt
---

# Esercizio 3

Un sistema di gestione delle presenze sul luogo lavorativo assegna ad ogni impiegato un codice (un numero intero). Ogni impiegato all’ingresso nel luogo di lavoro “timbra il cartellino” e così ad ogni uscita. Il sistema di gestione tiene traccia in due liste differenti le timbrature in ingresso e le timbrature in uscita: ogni volta che un impiegato entra/esce, il sistema aggiunge il codice identificativo in testa alla lista opportuna; uno stesso codice può quindi comparire ripetuto all’interno della rispettiva lista di entrata/uscita.  
In un mondo perfetto il numero di ingressi sul luogo di lavoro ed il numero di uscite dovrebbe essere sempre uguale o soddisfare una certa condizione specificata dal datore di lavoro (e.g., numero pari di entrate/uscite), invece ogni giorno ci sono dei problemi.

Sia data una lista concatenata di interi `list`, terminata con `NULL`{.cc}, che rappresenta il codice identificativo di un dipendente. Si scriva una funzione `estrai` che prende come argomenti tre liste concatenate di interi: `dipendenti`, `entrate`, ed `uscite`. Tutte queste liste sono di tipo puntatore al tipo `list` (si veda il file `esercizio3.cc`).

- La lista di interi `dipendenti` rappresenta i codici identificativi di tutti gli impiegati (codici non ripetuti)
- La lista di interi `entrate` contiene i codici dei dipendenti che nella giornata odierna hanno timbrato l’ingresso (ad ogni timbro corrisponde un codice: più timbri di ingresso effettuati dalla stessa persona corrispondono allo stesso codice che compare più volte ripetuto nella lista)
- La lista di interi `uscite` contiene i codici dei dipendenti impiegati che nella giornata odierna hanno timbrato l’uscita (ad ogni timbro corrisponde un codice: più timbri di uscita effettuati dalla stessa persona corrispondono allo stesso codice che compare più volte ripetuto nella lista)

La funzione `estrai` deve restituire in uscita una lista concatenata di interi rappresentante i codici corrispondenti alle persone tali per cui il numero delle entrate è uguale al numero delle uscite.  
Esempio:

```
Lista dipendenti: 63 22 50 93 36 94 16 78 87 84
Lista entrate: 84 94 93 22 78 16 94 93 50 63 87 16 94 93 87
 16 50 22 63 94 36 93 63 87 78 16 94 36 22
Lista uscite: 84 78 93 50 63 84 87 16 50 22 63 78 16 94 36
 50 22 63 84 78 36 93 50 22 63 87 16 94 93 22
Estratti: 36
```

Si scriva una funzione `delete_list` che deallochi una lista concatenata di interi.
