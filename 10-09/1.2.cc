
/*
Draw the figure:
x       x       x
    x   x   x
x   x   x   x   x
    x   x   x
x       x       x
*/

#include <iostream>

using namespace std;

int main(){
    int n = 7;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i == n-j-1 || i == n / 2 || j == n/2)
                cout << "x ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}
