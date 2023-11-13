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

int main1() {
    int coffee = 0;
    int money = 0;
    cout << "Quanti caffè sono disponibili in questa macchina?" << endl;
    cin >> coffee;
    cout << "Qual è il saldo iniziale?" << endl;
    cin >> money;

    CoffeeMachine machine = {coffee, money};
    bool goon = true;

    do {
        cout << "Cosa vuoi fare?\n\t 1. Ricaricare\n\t 2. Prendere un caffè (50)\n\t 3. Sapere qual è il saldo\n\t 4. Uscire" << endl;
        int scelta;
        cin >> scelta;
        switch (scelta) {
            case 1: {
                cout << "Quanto vuoi ricaricare?" << endl;
                int value;
                cin >> value;
                addCoin(&machine, value);
                break;
            }
            
            case 2: {
                if (getCoffee(&machine)) {
                    cout << "Coffee!" << endl;
                }
                else {
                    cout << "Non ci sono abbastanza soldi" << endl;
                }
                break;
            }

            case 3: {
                cout << "Il saldo è " << machine.change << endl;
                break;
            }

            case 4: {
                goon = false;
                break;
            }
            
            default: { 
                cout << "Scelta non valida!" << endl;
                break;
            }
        }

    } while (goon);

    return 0;
}

void addCoin(CoffeeMachine * machines, int val, int id){
    machines[id].change += val;
}

bool getCoffee(CoffeeMachine * machines, int id){
    if (machines[id].change >= 50 && machines[id].coffee > 0) {
        machines[id].change -= 50;
        machines[id].coffee--;
        return true;
    } else {
        return false;
    }
}

int main2(int argc, char* argv[]){
    int nMachines = -1;
    if (argc == 2){
        nMachines = atoi(argv[1]);
    }
    else{
        cout << "Quante macchine devono essere create?" << endl;
        cin >> nMachines;
    }
    cout << "Stiamo per creare: " << nMachines << " machinette" << endl;
    CoffeeMachine* machines = new CoffeeMachine[nMachines];
    for (int i=0; i<nMachines; i++){
        int coffee = 0;
        int money = 0;
        cout << "Quanti caffè sono disponibili in questa macchina?" << endl;
        cin >> coffee;
        cout << "Qual è il saldo iniziale?" << endl;
        cin >> money;
        machines[i].coffee=coffee;
        machines[i].change=money;
    }

    cout << "Sono state create " << nMachines << " macchine da caffè" << endl;
    bool goon = true;

    do {
        cout << "Cosa vuoi fare?\n\t 1. Ricaricare\n\t 2. Prendere un caffè\n\t 3. Sapere qual è il saldo\n\t 4. Uscire" << endl;
        int scelta;
        cin >> scelta;
        switch (scelta) {
            case 1: {
                cout << "Quanto vuoi ricaricare?" << endl;
                int value;
                cin >> value;
                int id;
                do {
                    cout << "In quale macchina? [0-" << nMachines << "]" << endl;
                    cin >> id;
                } while (id < 0 || id >= nMachines);
                addCoin(machines, value, id);
                break;
            }
            
            case 2: {
                int id;
                do {
                    cout << "Quale macchina?" << endl;
                    cin >> id;
                } while(id < 0 || id >= nMachines);

                if (getCoffee(machines, id)) {
                    cout << "Coffee!" << endl;
                }
                else {
                    cout << "Non ci sono abbastanza soldi" << endl;
                }
                break;
            }

            case 3: {
                int id;
                do{
                    cout << "Quale macchina? [0-" << nMachines << "]" << endl;
                    cin >> id;
                } while(id < 0 || id >= nMachines);
                cout << "Il saldo è " << machines[id].change << endl;
                break;
            }

            case 4: {
                goon = false;
                break;
            }
            
            default: { 
                cout << "Scelta non valida!" << endl;
                break;
            }
        }

    } while (goon);

    delete machines;
    return 0;
}

int main (int argc, char* argv[]){
    main1();
    cout << endl << endl << "----------------" << endl << endl << endl;
    main2(argc, argv);
    return 0;
}