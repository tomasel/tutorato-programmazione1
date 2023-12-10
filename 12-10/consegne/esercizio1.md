---
header-includes:
    - '\usepackage[a4paper]{geometry}'
documentclass: article
fontsize: 12pt
---

# Esercizio 1

Sia `input.txt` un file di input contenente stringhe separate da spazi. Queste stringhe possono
essere ripetute molteplici volte all’interno del file.
Scrivere nel file `esercizio1.cc` un programma che, dati come argomenti da riga di comando
il file di input e il nome di un file di output, scriva sul file in output tutte le stringhe valide senza duplicati. Una stringa è definita valida quando è composta solo da lettere minuscole.  
Si scriva inoltre vicino ad ogni stringa il numero di occorrenze di quella stringa all’interno del file, seguendo la formattazione `<stringa>:<numero>` (vedi sotto). Il programma deve anche controllare l’accuratezza dell’invocazione (e.g., numero di argomenti corretti) e la corretta apertura degli stream di input e output.

Supponiamo che il primo file `input.txt` contenga

```
aaa AAA bfe csCcs bfe asas
fre aaa bfe pewdfs assda lsA
```

Il programma dovrà poter essere chiamato nel seguente modo:

```sh
./esercizio1.out input.txt output.txt
```

e dovrà produrre un file chiamato `output.txt` che conterrà i seguenti valori:

```
aaa: 2
bfe: 3
asas: 1
fre: 1
pewdfs: 1
assda: 1
```

**Note**:

- Si assuma inoltre che ogni stringa sia formata da al massimo 100 caratteri e che il numero di sequenze uniche sia al massimo 100
- È consentito l’utilizzo della funzioni `strlen`, `strcmp` e `strcpy` della libreria `cstring`{.cc}.
- Non è consentito l’utilizzo di altre funzioni di libreria “particolari” diverse da quelle specificate sopra o da quelle standard necessarie a risolvere l’esercizio
- Le uniche assunzioni che si possono fare sull’input e su dimensioni di eventuali strutture/array utilizzate nel file di partenza fornito sono solo quelle espressamente specificate in questo testo (non quelle riportate nel file fornito, che sono solo indicative per consentire di svolgere l’esame).
- All’interno di questo programma non è ammesso l’utilizzo di variabili globali o di tipo `static`{.cc}
- Si ricorda che l’esempio di esecuzione è puramente indicativo e la soluzione proposta non deve funzionare solo per l’input fornito, ma deve essere robusta a variazioni compatibili con la specifica riportata in questo testo
