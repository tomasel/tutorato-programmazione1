

/*
Scrivere una funzione ricorsiva che calcoli il fattoriale di un qualsiasi numero intero.
Riscrivere poi la sua versione iterativa (quale delle due è più efficiente?).
*/

#include <iostream>

using namespace std;

int fattoriale(int n){
    if(n == 0)
        return 1;
    else
        return n * fattoriale(n-1);
}

int fattoriale_iter(int n){
    int res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main(){
    int n = 5;

    // benchmark thse two functions

    // std::chrono::time_point<std::chrono::steady_clock> start = chrono::steady_clock::now();
    cout << "fattoriale(" << n << ") = " << fattoriale(n) << endl;
    // std::chrono::time_point<std::chrono::steady_clock> end = chrono::steady_clock::now();

    // cout << "Elapsed time in nanoseconds : " 
    //     << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
    //     << " ns" << endl;

    // start = chrono::steady_clock::now();
    cout << "fattoriale_iter(" << n << ") = " << fattoriale_iter(n) << endl;
    // end = chrono::steady_clock::now();

    // cout << "Elapsed time in nanoseconds : " 
    //     << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
    //     << " ns" << endl;

    return 0;
}

