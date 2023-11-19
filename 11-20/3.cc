
// move chunk of linked list

#include <iostream>

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

LinkedListNode* moveChunk(LinkedListNode* head, int startIndex, int lenOfChunk) {

    // move the segments of the linked list from startIndex to startIndex + lenOfChunk to the end of the linked list    
    LinkedListNode *startNode = head;

    // find the node before the start index
    // 0 --> 1 --> 2 --> 3
    //       ^     ^
    //       |     |
    //       | startIndex
    //    startNode
    // the one after this will be the start of the chunk
    for (int i = 0; i < startIndex - 1; i++) {
        startNode = startNode->next;
    }

    // find the node after the end index
    // 3 --> 4 --> 5 --> 6
    //             ^     ^
    //             |     |
    //          endNode endIndex
    // this one will have next = NULL
    LinkedListNode *endNode = startNode;
    for (int i = 0; i < lenOfChunk; i++) {
        endNode = endNode->next;
    }

    // find final node of the list, 
    // so we can append the chunk to the end
    LinkedListNode *finalNode = endNode;
    while (finalNode->next != NULL) {
        finalNode = finalNode->next;
    }

    if (startIndex == 0) {
        // if the start index is 0, then we need to move the head, 
        // and append the chunk to the end
        finalNode->next = head;
        head = endNode->next;
    } else {
        // otherwise, we can just move the chunk
        finalNode->next = startNode->next;
        startNode->next = endNode->next;
    }

    // set the next of the end node to NULL, otherwise we'll have a loop
    endNode->next = NULL;
    return head;
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

    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 4;
    fifth->next = NULL;

    printList(head);
    cout << endl;

    head = moveChunk(head, 0, 2);

    printList(head);
    cout << endl;

    return 0;
}