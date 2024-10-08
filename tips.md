---
header-includes:
    - '\usepackage[a4paper]{geometry}'
documentclass: article
fontsize: 12pt
---

# Librerie

```.cc
// <cctype> (char > bool)
isalnum(c) 	    // carattere alfabetico o cifra decimale
isalpha(c)		// carattere alfabetico
iscntrl(c)		// carattere di controllo
isdigit(c)		// cifra decimale
isgraph(c)		// carattere grafico, diverso da spazio
islower(c)		// lettera minuscola
isprint(c)		// carattere stampabile, anche spazio
isspace(c)		// spazio, salto pagina, nuova riga o tabulazzione
isupper(c)		// lettera maiuscola
isxdigit(c)	    // cifra esadecimale

// <cctype> (char > char)
// tolower(c), toupper(c)

// <cmath> (double > double)
fabs(x)		    // valore assoluto di tipo float
sqrt(x)		    // radice quadrata di x
pow(x,y)		// eleva x alla potenza di y
exp(x)		    // eleva e alla potenza di x
log(x) 		    // logaritmo naturale di x
log10(x)		// logaritmo in base 10 di x
sin(x) asin(x)	// seno e arcoseno trigonometrico
cos(x) acos(x)  // coseno e arcocoseno trigonometrico
tan(x) atan(x)	// tangente e arcotangente trig.

// <iostream> 
cin.eof()		    // returns true when stream finished
                    // (needs an input at least once!)
cin.fail()		    // returns true when reading failed or stream finished
cin.clear()	        // handles errors in reading, returns to the first
                    // valid state
cin.getline(s,n)	// s is a string, n is the number of characters
                    // including \0	
cin.get(c)		    // reads a single char including special ones,
                    // returns it (\0 if eof)
cout.put(c)		    // simply does cout on a cin.get(c)
cin >> a		    // inbound stream, can be used as a Boolean and
                    // returns true if went ok

// <cstring>
strlen(s) 		// restituisce la lunghezza di s
strchr(s,c) 	// restituisce un puntatore alla prima occorrenza di c in s,
                // oppure NULL se c non si trova in s
strrchr(s,c)	// come sopra ma per l'ultima occorrenza di c in s
strstr(s,t)	    // restituisce un puntatore alla prima occorrenza della
                // sottostringa t in s,
                // oppure NULL se t non si trova in s
strcpy(s,t)     // copia t in s e restituisce s
strncpy(s,t,n)	// copia n caratteri di t in s e restituisce s
strcat(s,t) 	// concatena t al termine di s e restituisce s
strncat(s,t,n)	// concatena n caratteri di t al termine di s e restituisce s
strcmp(s,t)	    // restituisce un valore negativo, nullo o positivo se è
                // alfabeticamente minore, uguale o maggiore di t

// <cstdlib>
atoi(s), atof(s)	// converts strings to int or float and returns it
exit(EXIT_MESSAGE)	// immediately terminates the program;

// <iomanip>
setw(int)		    // sets standard tabulation between outputs
setprecision(int)	// number of digits after the dot on a float

// <fstream>
streamname.open(filename,mode(ios::in,  //
    ios::out,                           //
    ios::out|ios::app)                  // stream opening
streamname >> in;
streamname << out;
streamname.eof()                        // streamname can now be used as cin and
                                        // cout with iostream library

type & id = exp     // (exp has l value)
&id = address-of    // (returns l-value of exp)

type * id;
id = &exp   // (pointer to l-value of exp)
*id = temp  // synonym of exp

const type *id       // (does not permit editing via dereference)
type *const id       // (pointing object is fixed)
const type *const id // (both)

// Varie:
./a.out | more 			        // suddivide in schermate
./a.out | cat			        // paginate sola
./a.out < file			        // cout from file
./a.out > file			        // log to file
char -= "a" - "A"		        // lowercase change
g++ file -O2			        // optimisation level 2, with t-r -> iterative
g++ file -fno-stack-protector   // suppression of stack protection

// Randomisation in range MIN-MAX:
#include <stdlib.h>
#include <time.h>
#define MAX 456
#define MIN 27
srand(time(NULL))
int = rand() % (MAX - MIN + 1) + MIN;
```

# Tipi di dati astratti

## Stack

```.cc
	init, print -> void
	push, top, pop -> retval

	// nel caso di array:
	// l'indice tiene conto dell'andamento
	// grandezza dello stack pari a dim
	// servono sia emptyp che fullp (quando i = 0 o dim)

	init		// setta l'indice a 0
	top			// passa per riferimento l'elemento i-1
	push		// setta elem[n] e incrementa n
	pop			// diminuisce n

	// nel caso di puntatori:
	// serve solo emptyp (s == NULL)

	init		// setta s = NULL
	top			// passa per riferimento s->value
	pop			// crea un nuovo nodo* = s;
				// s punta a s->next e nodo* viene cancellato
	push		// crea un nodo* che riceve il valore passato
				// nodo*->next punta a s e s punta a nodo
```

## Queue

```.cc
	init, print -> void
	enqueue, deuqueue, first -> retval

	// nel caso di array:

	// concetto di array circolare con succ(i)=(i+1)%dim
	// due indici, h primo inserito, t-1 ultimo
	// servono sia emptyp (h = t) che fullp (h = succ(t))
	// dimensione dell'array data da (t>=h ? t-h : t-h+dim)
	init	// setta h e t = 0
	enqueue	// setta a[t] con il valore e fa succ(t)
	dequeue // decrementa t
	first	// restituisce a[t]

	// nel caso di puntatori: 
	// serve solo emptyp (h == NULL)
	// h punta al primo elemento, t all'ultimo
	init 	// setta h = NULL
	enqueue // alloca un nuovo nodo* e ci copia il valore,
			// pone nodo->next = NULL, poi a seconda del caso:
			// 	se la coda è, assegna h al nodo
			// 	se la coda è non vuota, assegna t->next al nodo
			// infine pone t = nodo
	dequeue // crea un nodo* temporaneo = h, h = n->next, e il 
			// nodo viene dallocato
	first	// restituisce h->next
```

## Tree

```.cc
	// nel caso di puntatori:
	// idea di nodi con puntatori right e left e campo value
	// lunghezza massima dell'albero compresa tra ceil(log(2,n+1),n)

	init    // t == NULL
	search	// se t == NULL, restituisce null,
			// se t->val = val,	restituisce t
			// se val > t->val,	cerca in t->right
			// se val < t->val,	cerca in t->left
	insert  // se t == NULL, 		crea un nuovo nodo e lo 								
			// 					inserisce in left/right
			// se val > t->val,	inserisce ric in t->right
			// se val < t->val,	inserisce ric in t->left
```
