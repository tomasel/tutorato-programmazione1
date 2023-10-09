
/*
Scrivere una funzione void genericSwap (void*, void*, bool) che esegua un controllo sul parametro booleano e decida se eseguire uno scambio tra puntatori di tipo int o di tipo char.
*/

#include <iostream>

using namespace std;

void genericSwap(void* p1, void* p2, bool b){
    if(b){
        int* tmp = (int*)p1;
        p1 = p2;
        p2 = tmp;
    }
    else{
        char* tmp = (char*)p1;
        p1 = p2;
        p2 = tmp;
    }
}

int main(){
    int a = 5;
    int b = 10;
    char c = 'a';
    char d = 'b';

    cout << "a: " << a << " b: " << b << endl;
    cout << "c: " << c << " d: " << d << endl;

    genericSwap(&a, &b, true);
    genericSwap(&c, &d, false);

    cout << "a: " << a << " b: " << b << endl;
    cout << "c: " << c << " d: " << d << endl;

    return 0;
}
