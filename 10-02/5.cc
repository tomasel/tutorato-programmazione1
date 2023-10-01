/*
Considerate il seguente ciclo for:

int sum = 0;
for (int i=0; i<10; i++){
    sum += i;
}
cout << sum << endl;
Riscriverlo come un ciclo while.
*/

#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int i = 0;

    while(i<10){
        sum += i;
        i++;
    }
    
    cout << sum << endl;
    
    return 0;
}