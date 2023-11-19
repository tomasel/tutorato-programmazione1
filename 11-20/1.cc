// bubble sort for linked lists

#include <iostream>
#include <cstdlib>

using namespace std;

struct LinkedListNode {
    int data;
    LinkedListNode *next;
};

void printList(LinkedListNode *head) {
    LinkedListNode *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void bubbleSort(LinkedListNode *head) {
    LinkedListNode *temp = head;
    LinkedListNode *temp2 = head;
    int tempData;
    while (temp != NULL) {
        while (temp2 != NULL) {
            if (temp->data < temp2->data) {
                tempData = temp->data;
                temp->data = temp2->data;
                temp2->data = tempData;
            }
            temp2 = temp2->next;
        }
        temp2 = head;
        temp = temp->next;
    }
}

int main() {
    LinkedListNode *head = NULL;
    LinkedListNode *second = NULL;
    LinkedListNode *third = NULL;
    LinkedListNode *fourth = NULL;
    LinkedListNode *fifth = NULL;

    head = new LinkedListNode;
    second = new LinkedListNode;
    third = new LinkedListNode;
    fourth = new LinkedListNode;
    fifth = new LinkedListNode;

    head->data = 5;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 1;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 2;
    fifth->next = NULL;

    cout << "Before sorting: ";
    printList(head);
    cout << endl;

    bubbleSort(head);

    cout << "After sorting: ";
    printList(head);
    cout << endl;

    return 0;
}