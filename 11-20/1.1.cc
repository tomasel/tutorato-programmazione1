#include <iostream>

typedef struct dataStruct {
  int *data;
  int size, numData;
} dataStruct;

void ResizeArray(dataStruct *orig, int size);

int main () {

  return 0;
}

void ResizeArray(dataStruct *orig, int size) {
  int *tmp = orig->data;
  int *newarr = new int[size];
  if (size > orig->size) {
    for (int i = 0; i < orig->size; ++i)
      newarr[i] = orig->data[i];
  } else {
    for (int i = 0; i < size; ++i)
      newarr[i] = orig->data[i];
  }
  orig->data = newarr;
  delete tmp;
}
