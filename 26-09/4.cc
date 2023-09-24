#include <iostream>

using namespace std;

int main() {
    int a, b; 
    cout << "Insert a number, any number: ";
    cin >> a;
    cout << "Insert another number, any number: ";
    cin >> b;

    cout << "The result of the division is: " << a/b << "\n";
    cout << "The remainder of the division is: " << a%b << "\n";
    return 0;
}
