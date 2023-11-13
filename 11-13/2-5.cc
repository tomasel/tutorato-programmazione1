
#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

struct LinkedCars {
    char name[50];
    LinkedCars* next;
};

void print_ll(LinkedCars* head) {
    LinkedCars* current = head;
    while (current != NULL) {
        cout << current->name << endl;
        current = current->next;
    }
}

int main(){

    LinkedCars e = {"TF I donnow cars", NULL};
    LinkedCars d = {"Bentley", &e};
    LinkedCars c = {"BMW", &d};
    LinkedCars b = {"Citroen", &c};
    LinkedCars a = {"Fiat", &b};

    LinkedCars* head = &a;

    // prima parte dell'esercizio, stampa (3.1)
    print_ll(head);

    // seconda parte dell'esercizio, ricerca e rimozione (3.2)
    char name[50] = "BMW";
    LinkedCars* current2 = head;
    while (current2->next != NULL) {

        if (strcmp(current2->next->name, name) == 0) {
            cout << "found " << name << endl;
            // rimuovo la macchina
            current2->next = current2->next->next;
        }

        current2 = current2->next;
    }

    // stampa
    print_ll(head);

    return 0;

}
