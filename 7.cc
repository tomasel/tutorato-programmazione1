
/*

Dato un array inizializzato in modo casuale, ordinarlo usando StalinSort, descritto nella seguente procedura:

    Confrontare i due valori iniziali nell'array;
    Se il primo è maggiore del secondo, eliminalo (settando a 0).
    Ripeti per tutti i valori


*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int array[10] = {0, 5, 3, 2, 6, 7, 8, 1, 2, 6};

    for (int i = 0; i < 10; i++) {
        if (array[i] > array[i+1]) {
            array[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    return 0; 
}