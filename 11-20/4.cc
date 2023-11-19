#include <iostream>

// struttura usata nell'esercizio 1
typedef struct dataStruct {
  int* data;
  int size, numData;
} dataStruct;

// inserzione di un elemento
void insertInHeap (dataStruct *pHeap, int newItem) {
  int index = ++(pHeap->numData);
  while (index > 1 &&
         pHeap->data[(int)(index / 2)] < newItem) {
    pHeap->data[index] = pHeap->data[(int)(index / 2)];
    index = (int)(index / 2);
  }
  pHeap->data[index] = newItem;
}

// rimozione di un elemento (ricorsiva)
void heapify(int index, dataStruct *pHeap) {
  int left, right, max;
  int tmp;

  left = 2 * index;
  if (left <= pHeap->numData) {
    if (pHeap->data[left] > pHeap->data[index])
      max = left;
    else
      max = index;
    right = left + 1;
    if (right <= pHeap->numData &&
        pHeap->data[right] > pHeap->data[max])
      max = right;
    if (max != index) {
      tmp = pHeap->data[index];
      pHeap->data[index] = pHeap->data[max];
      pHeap->data[max] = tmp;
      heapify(max, pHeap);
    }
  } 
}

// la funzione di ordinamento sfrutta heapify
void buildHeap(dataStruct *pHeap) {
  int i;
  for (i = (int)(pHeap->numData / 2); i > 0; --i)
    heapify(i, pHeap);
}

int main () {

  return 0;
}
