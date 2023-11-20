#include <cstdlib>
#include <iostream>

typedef struct dataStruct {
  int *data;
  int size, numData;
} dataStruct;

void insertInBucket(dataStruct bucket, int newItem);
int removeFromBucket(dataStruct bucket, int index);

int main () {

  return 0;
}

void insertInBucket(dataStruct *bucket, int newItem) {
  // se l'array è pieno, rialloco la memoria raddoppiandola
  // e aggiorno il valore di size
  if (bucket->numData == bucket->size) {
    int *old_data = bucket->data;
    bucket->data = new int[2 * bucket->size];
    bucket->size *= 2;
    delete old_data;
  }
  // inserisco il nuovo elemento aggiornando il valore di numData
  // notare che la posizione dell'incremento è fondamentale
  bucket->data[bucket->numData++] = newItem;
}

int removeFromBucket(dataStruct *bucket, int index) {
  // sovrascrivo l'elemento in posizione index con l'ultimo elemento
  // dell'array e aggiorno il valore di numData
  // notare che la posizione del decremento è fondamentale
  int deletedItem = bucket->data[index];
  bucket->data[--bucket->numData] = bucket->data[index];
  // per rispecchiare il comportamento di insertInBucket nella gestione di size
  // si libera memoria solo quando numData è strettamente minore della metà di size
  if (bucket->numData < (int)(bucket->size / 2)) {
    int *old_data = bucket->data;
    bucket->data = new int[(int)(bucket->size / 2)];
    bucket->size /= 2;
    delete old_data;
  }
  // ritorno l'elemento cancellato
  return deletedItem;
}
