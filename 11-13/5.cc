
#include <iostream>

using namespace std;

struct CoffeeMachine {
    int coffee;
    int change;
};

void addCoin(CoffeeMachine * machine, int val){
    machine->change += val;
}

bool getCoffee(CoffeeMachine * machine){
    if (machine->change >= 50 && machine->coffee > 0) {
        machine->change -= 50;
        machine->coffee--;
        return true;
    } else {
        return false;
    }
}

int main() {

    CoffeeMachine machine = {2, 0};

    addCoin(&machine, 10);

    if (getCoffee(&machine)) {
        cout << "Coffee!" << endl;
    } else {
        cout << "Not enough money or coffee!" << endl;
    }

    addCoin(&machine, 100);

    if (getCoffee(&machine)) {
        cout << "Coffee!" << endl;
    } else {
        cout << "Not enough money or coffee!" << endl;
    }

    if (getCoffee(&machine)) {
        cout << "Coffee!" << endl;
    } else {
        cout << "Not enough money or coffee!" << endl;
    }

    if (getCoffee(&machine)) {
        cout << "Coffee!" << endl;
    } else {
        cout << "Not enough money or coffee!" << endl;
    }

    addCoin(&machine, 100);

    if (getCoffee(&machine)) {
        cout << "Coffee!" << endl;
    } else {
        cout << "Not enough money or coffee!" << endl;
    }

    return 0;
}