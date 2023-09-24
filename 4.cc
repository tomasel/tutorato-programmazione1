
#include <iostream>

int main() {
    int a, b; 
    std::cout << "Insert a number, any number: ";
    std::cin >> a;
    std::cout << "Insert another number, any number: ";
    std::cin >> b;

    std::cout << "The result of the division is: " << a/b << "\n";
    std::cout << "The remainder of the division is: " << a%b << "\n";
    return 0;
}
