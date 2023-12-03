# tutorato-programmazione1

Tutorato del corso di Programmazione 1 del professor Marco Roveri.

## Files

I file markdown contengono un preambolo necessario per la formattazione. Si possono compilare con `pandoc`

```sh
pandoc -f markdown -t pdf <file_in>.md -o <file_out>.pdf
```

Alcuni file contengono immagini in `svg`. Il file `./12-04/graph.dot`, ad esempio, genera un'immagine `graph.svg` richiesta dal file di esercizi nella stessa cartella. Per generare tale immagine è necessario utilizzare [graphviz](https://graphviz.org/) con il comando

```sh
dot -Tsvg graph.dot -o graph.svg
```
